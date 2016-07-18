#pragma once

namespace Lab1CollegeMascot {

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Button^  button2;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(93, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(604, 475);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Show / Hide";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 534);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Graphics ^g;
		Bitmap ^CollegeMascotBmp = gcnew Bitmap(L"CollegeMascot.bmp");
		
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		g = pictureBox1->CreateGraphics();
		
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		g->DrawImage(CollegeMascotBmp, 0, 0);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox1->Visible = !pictureBox1->Visible;
		//pictureBox1->Visible = !pictureBox1->Visible;
		//pictureBox1->Visible = !pictureBox1->Visible;
		//System::Threading::Thread::Sleep(1500);
		//g->DrawImage(CollegeMascotBmp, 0, 0);
		//pictureBox1->Show();
		//pictureBox1->Invalidate();
		Refresh();
		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}


private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	g->DrawImage(CollegeMascotBmp, 0, 0);
}
};
}
