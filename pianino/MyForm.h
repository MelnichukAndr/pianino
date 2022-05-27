#pragma once

namespace pianino {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ FA;
	private: System::Windows::Forms::Button^ Do;
	private: System::Windows::Forms::Button^ Re;
	private: System::Windows::Forms::Button^ Mi;
	private: System::Windows::Forms::Button^ So;
	private: System::Windows::Forms::Button^ La;
	private: System::Windows::Forms::Button^ Si;
	private: System::Windows::Forms::RadioButton^ Mario;
	private: System::Windows::Forms::RadioButton^ Herringbone;
	private: System::Windows::Forms::RadioButton^ Grasshopper;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ reproduction;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->FA = (gcnew System::Windows::Forms::Button());
			this->Do = (gcnew System::Windows::Forms::Button());
			this->Re = (gcnew System::Windows::Forms::Button());
			this->Mi = (gcnew System::Windows::Forms::Button());
			this->So = (gcnew System::Windows::Forms::Button());
			this->La = (gcnew System::Windows::Forms::Button());
			this->Si = (gcnew System::Windows::Forms::Button());
			this->Mario = (gcnew System::Windows::Forms::RadioButton());
			this->Herringbone = (gcnew System::Windows::Forms::RadioButton());
			this->Grasshopper = (gcnew System::Windows::Forms::RadioButton());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->reproduction = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(519, 550);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// FA
			// 
			this->FA->Location = System::Drawing::Point(775, 67);
			this->FA->Name = L"FA";
			this->FA->Size = System::Drawing::Size(60, 250);
			this->FA->TabIndex = 1;
			this->FA->Text = L"Fa\r\n\r\n\r\n4";
			this->FA->UseVisualStyleBackColor = true;
			this->FA->Click += gcnew System::EventHandler(this, &MyForm::FA_Click);
			// 
			// Do
			// 
			this->Do->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Do->Location = System::Drawing::Point(579, 67);
			this->Do->Name = L"Do";
			this->Do->Size = System::Drawing::Size(60, 250);
			this->Do->TabIndex = 2;
			this->Do->Text = L"Do\r\n\r\n\r\n1";
			this->Do->UseVisualStyleBackColor = true;
			this->Do->Click += gcnew System::EventHandler(this, &MyForm::Do_Click);
			// 
			// Re
			// 
			this->Re->Location = System::Drawing::Point(643, 67);
			this->Re->Name = L"Re";
			this->Re->Size = System::Drawing::Size(60, 250);
			this->Re->TabIndex = 3;
			this->Re->Text = L"Re\r\n\r\n\r\n2";
			this->Re->UseVisualStyleBackColor = true;
			this->Re->Click += gcnew System::EventHandler(this, &MyForm::Re_Click);
			// 
			// Mi
			// 
			this->Mi->Location = System::Drawing::Point(709, 67);
			this->Mi->Name = L"Mi";
			this->Mi->Size = System::Drawing::Size(60, 250);
			this->Mi->TabIndex = 4;
			this->Mi->Text = L"Mi\r\n\r\n\r\n3";
			this->Mi->UseVisualStyleBackColor = true;
			this->Mi->Click += gcnew System::EventHandler(this, &MyForm::Mi_Click);
			// 
			// So
			// 
			this->So->Location = System::Drawing::Point(841, 67);
			this->So->Name = L"So";
			this->So->Size = System::Drawing::Size(60, 250);
			this->So->TabIndex = 5;
			this->So->Text = L"So\r\n\r\n\r\n5";
			this->So->UseVisualStyleBackColor = true;
			this->So->Click += gcnew System::EventHandler(this, &MyForm::So_Click);
			// 
			// La
			// 
			this->La->Location = System::Drawing::Point(907, 67);
			this->La->Name = L"La";
			this->La->Size = System::Drawing::Size(60, 250);
			this->La->TabIndex = 6;
			this->La->Text = L"La\r\n\r\n\r\n6";
			this->La->UseVisualStyleBackColor = true;
			this->La->Click += gcnew System::EventHandler(this, &MyForm::La_Click);
			// 
			// Si
			// 
			this->Si->Location = System::Drawing::Point(973, 67);
			this->Si->Name = L"Si";
			this->Si->Size = System::Drawing::Size(60, 250);
			this->Si->TabIndex = 7;
			this->Si->Text = L"Si\r\n\r\n\r\n7";
			this->Si->UseVisualStyleBackColor = true;
			this->Si->Click += gcnew System::EventHandler(this, &MyForm::Si_Click);
			// 
			// Mario
			// 
			this->Mario->AutoSize = true;
			this->Mario->Location = System::Drawing::Point(579, 38);
			this->Mario->Name = L"Mario";
			this->Mario->Size = System::Drawing::Size(64, 21);
			this->Mario->TabIndex = 8;
			this->Mario->Text = L"Mario";
			this->Mario->UseVisualStyleBackColor = true;
			this->Mario->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Mario_CheckedChanged);
			// 
			// Herringbone
			// 
			this->Herringbone->AutoSize = true;
			this->Herringbone->Location = System::Drawing::Point(643, 38);
			this->Herringbone->Name = L"Herringbone";
			this->Herringbone->Size = System::Drawing::Size(108, 21);
			this->Herringbone->TabIndex = 9;
			this->Herringbone->Text = L"Herringbone";
			this->Herringbone->UseVisualStyleBackColor = true;
			this->Herringbone->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Herringbone_CheckedChanged);
			// 
			// Grasshopper
			// 
			this->Grasshopper->AutoSize = true;
			this->Grasshopper->Location = System::Drawing::Point(757, 38);
			this->Grasshopper->Name = L"Grasshopper";
			this->Grasshopper->Size = System::Drawing::Size(112, 21);
			this->Grasshopper->TabIndex = 10;
			this->Grasshopper->Text = L"Grasshopper";
			this->Grasshopper->UseVisualStyleBackColor = true;
			this->Grasshopper->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Grasshopper_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->Location = System::Drawing::Point(875, 35);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(74, 24);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->Text = L"reset";
			this->radioButton1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::radioButton1_KeyDown);
			// 
			// reproduction
			// 
			this->reproduction->Location = System::Drawing::Point(942, 36);
			this->reproduction->Name = L"reproduction";
			this->reproduction->Size = System::Drawing::Size(104, 24);
			this->reproduction->TabIndex = 0;
			this->reproduction->Text = L"reproduction";
			this->reproduction->CheckedChanged += gcnew System::EventHandler(this, &MyForm::reproduction_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(958, 591);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(88, 21);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"keyboard";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::radioButton2_KeyDown);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(1060, 591);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(62, 21);
			this->radioButton3->TabIndex = 12;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Clear";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1134, 624);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->reproduction);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->Grasshopper);
			this->Controls->Add(this->Herringbone);
			this->Controls->Add(this->Mario);
			this->Controls->Add(this->Si);
			this->Controls->Add(this->La);
			this->Controls->Add(this->So);
			this->Controls->Add(this->Mi);
			this->Controls->Add(this->Re);
			this->Controls->Add(this->Do);
			this->Controls->Add(this->FA);
			this->Controls->Add(this->pictureBox1);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"Pianino";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Do_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Re_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Mi_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void So_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void La_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Si_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Mario_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Herringbone_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Grasshopper_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void MyForm_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

private: System::Void radioButton1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
private: System::Void reproduction_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void radioButton2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
