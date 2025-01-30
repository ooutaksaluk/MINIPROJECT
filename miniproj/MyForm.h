#pragma once
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
using namespace cv;
using namespace System::Drawing::Imaging;

namespace miniproj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// 
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ FileButton;
	private: System::Windows::Forms::Button^ SaveasButton;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ drawToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ startDrawToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stopDrawingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rubberToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SaveasButton = (gcnew System::Windows::Forms::Button());
			this->FileButton = (gcnew System::Windows::Forms::Button());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->drawToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startDrawToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stopDrawingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rubberToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->SaveasButton);
			this->splitContainer1->Panel2->Controls->Add(this->FileButton);
			this->splitContainer1->Panel2->Controls->Add(this->StartButton);
			this->splitContainer1->Panel2->Controls->Add(this->menuStrip1);
			this->splitContainer1->Size = System::Drawing::Size(1114, 662);
			this->splitContainer1->SplitterDistance = 585;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(585, 662);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// SaveasButton
			// 
			this->SaveasButton->Location = System::Drawing::Point(14, 627);
			this->SaveasButton->Name = L"SaveasButton";
			this->SaveasButton->Size = System::Drawing::Size(75, 23);
			this->SaveasButton->TabIndex = 2;
			this->SaveasButton->Text = L"SaveAs";
			this->SaveasButton->UseVisualStyleBackColor = true;
			this->SaveasButton->Click += gcnew System::EventHandler(this, &MyForm::SaveasButton_Click);
			// 
			// FileButton
			// 
			this->FileButton->Location = System::Drawing::Point(438, 598);
			this->FileButton->Name = L"FileButton";
			this->FileButton->Size = System::Drawing::Size(75, 23);
			this->FileButton->TabIndex = 1;
			this->FileButton->Text = L"FILE";
			this->FileButton->UseVisualStyleBackColor = true;
			this->FileButton->Click += gcnew System::EventHandler(this, &MyForm::FileButton_Click);
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(438, 627);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(75, 23);
			this->StartButton->TabIndex = 0;
			this->StartButton->Text = L" Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->drawToolStripMenuItem,
					this->colorToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(525, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// drawToolStripMenuItem
			// 
			this->drawToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->startDrawToolStripMenuItem,
					this->stopDrawingToolStripMenuItem, this->rubberToolStripMenuItem
			});
			this->drawToolStripMenuItem->Name = L"drawToolStripMenuItem";
			this->drawToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->drawToolStripMenuItem->Text = L"Drawing";
			this->drawToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::drawToolStripMenuItem_Click);
			// 
			// startDrawToolStripMenuItem
			// 
			this->startDrawToolStripMenuItem->Name = L"startDrawToolStripMenuItem";
			this->startDrawToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->startDrawToolStripMenuItem->Text = L"StartDrawing";
			this->startDrawToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::startDrawToolStripMenuItem_Click);
			// 
			// stopDrawingToolStripMenuItem
			// 
			this->stopDrawingToolStripMenuItem->Name = L"stopDrawingToolStripMenuItem";
			this->stopDrawingToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->stopDrawingToolStripMenuItem->Text = L"StopDrawing";
			this->stopDrawingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::stopDrawingToolStripMenuItem_Click);
			// 
			// rubberToolStripMenuItem
			// 
			this->rubberToolStripMenuItem->Name = L"rubberToolStripMenuItem";
			this->rubberToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->rubberToolStripMenuItem->Text = L"Rubber";
			this->rubberToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rubberToolStripMenuItem_Click);
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->colorToolStripMenuItem->Text = L"Color";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::colorToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->DefaultExt = L"png";
			this->saveFileDialog->Filter = L"Image files|*.jpg;*.png";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1114, 662);
			this->Controls->Add(this->splitContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Bitmap^ bmp; // Declare application bitmap image
	private:
		bool isStart = false;
	private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isStart) {
			isStart = false;
			StartButton->Text = "Start";
			return;
		}

		VideoCapture capture(0);
		while (!capture.isOpened());

		int capWidth = (int)capture.get(CAP_PROP_FRAME_WIDTH);
		int capHeight = (int)capture.get(CAP_PROP_FRAME_HEIGHT);

		isStart = true;
		bmp = gcnew Bitmap(capWidth, capHeight, PixelFormat::Format24bppRgb);
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		StartButton->Text = "Stop";

		while (isStart) {
			BitmapData^ bmpData = bmp->LockBits(rect,
				ImageLockMode::ReadWrite,
				bmp->PixelFormat);

			Mat image(bmp->Height, bmp->Width, CV_8UC3,
				bmpData->Scan0.ToPointer(),
				bmpData->Stride);

			capture.read(image);
			bmp->UnlockBits(bmpData);
			pictureBox1->Image = bmp;
			Application::DoEvents();
		}
	}

	private: System::Void FileButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			Bitmap^ image = gcnew Bitmap(openFileDialog1->FileName);
			// Convert image to 24 bits RGB
			bmp = gcnew Bitmap(image->Size.Width, image->Size.Height,
				Imaging::PixelFormat::Format24bppRgb);
			bmp->SetResolution(image->HorizontalResolution, image->VerticalResolution);
			Graphics^ g = Graphics::FromImage(bmp);
			g->DrawImage(image, 0, 0);
			delete image;
			pictureBox1->Image = bmp;
		}
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void SaveasButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((bmp != nullptr) && (saveFileDialog->ShowDialog() ==

			System::Windows::Forms::DialogResult::OK)) {

			bmp->Save(saveFileDialog->FileName);

		}

	}
	private: System::Void drawToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // Add these private members to your MyForm class
private:
	bool isDrawing = false;
	bool canDraw = false;
	bool isErasing = false;
	System::Drawing::Point lastPoint;
	Color drawColor = Color::Black;
	int penWidth = 2;

	// Add these event handlers after InitializeComponent()
private: void InitializeDrawing() {
	// Set up mouse event handlers
	pictureBox1->MouseDown += gcnew MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
	pictureBox1->MouseMove += gcnew MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
	pictureBox1->MouseUp += gcnew MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
}

private: System::Void pictureBox1_MouseDown(System::Object^ sender, MouseEventArgs^ e) {
	if (canDraw) {
		isDrawing = true;
		lastPoint = e->Location;
	}
}

private: System::Void pictureBox1_MouseMove(System::Object^ sender, MouseEventArgs^ e) {
	if (isDrawing && canDraw) {
		Graphics^ g = Graphics::FromImage(pictureBox1->Image);
		Pen^ pen;
		if (isErasing) {
			pen = gcnew Pen(Color::White, penWidth + 8); // Wider pen for eraser
		}
		else {
			pen = gcnew Pen(drawColor, penWidth);
		}
		g->DrawLine(pen, lastPoint, e->Location);
		delete pen;
		delete g;
		lastPoint = e->Location;
		pictureBox1->Refresh();
	}
}

private: System::Void pictureBox1_MouseUp(System::Object^ sender, MouseEventArgs^ e) {
	isDrawing = false;
}

	   // Update your menu item click handlers
private: System::Void startDrawToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	canDraw = true;
	isErasing = false;
	// Create a blank bitmap if none exists
	if (pictureBox1->Image == nullptr) {
		bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		Graphics^ g = Graphics::FromImage(bmp);
		g->Clear(Color::White);
		delete g;
		pictureBox1->Image = bmp;
	}
}

private: System::Void stopDrawingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	canDraw = false;
	isDrawing = false;
}

private: System::Void rubberToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (canDraw) {
		isErasing = !isErasing; // Toggle eraser mode
	}
}

private: System::Void colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog = gcnew ColorDialog();
	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		drawColor = colorDialog->Color;
	}
	delete colorDialog;
}
	};
}