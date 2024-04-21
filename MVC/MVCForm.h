#pragma once
#include "Model.h"
#include <fstream>

namespace MVC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MVCForm
	/// </summary>

	public ref class MVCForm : public System::Windows::Forms::Form
	{
	private:
		Model^ model;
	public:
		MVCForm(void)
		{
			InitializeComponent();
			
			model = gcnew Model();
			model->observer += gcnew System::EventHandler(this, &MVCForm::UpdateFromModel);
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MVCForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownA;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownB;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownC;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::TextBox^ textBoxC;
	private: System::Windows::Forms::TrackBar^ trackBarA;
	private: System::Windows::Forms::TrackBar^ trackBarB;
	private: System::Windows::Forms::TrackBar^ trackBarC;
	private: System::Windows::Forms::Label^ labelText;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDownA = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownB = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownC = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxC = (gcnew System::Windows::Forms::TextBox());
			this->trackBarA = (gcnew System::Windows::Forms::TrackBar());
			this->trackBarB = (gcnew System::Windows::Forms::TrackBar());
			this->trackBarC = (gcnew System::Windows::Forms::TrackBar());
			this->labelText = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarC))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(21, 67);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(120, 20);
			this->textBoxA->TabIndex = 0;
			this->textBoxA->Text = L"0";
			this->textBoxA->Leave += gcnew System::EventHandler(this, &MVCForm::textBoxA_Leave);
			// 
			// numericUpDownA
			// 
			this->numericUpDownA->Location = System::Drawing::Point(21, 93);
			this->numericUpDownA->Name = L"numericUpDownA";
			this->numericUpDownA->Size = System::Drawing::Size(120, 20);
			this->numericUpDownA->TabIndex = 1;
			this->numericUpDownA->Leave += gcnew System::EventHandler(this, &MVCForm::numericUpDownA_Leave);
			// 
			// numericUpDownB
			// 
			this->numericUpDownB->Location = System::Drawing::Point(162, 93);
			this->numericUpDownB->Name = L"numericUpDownB";
			this->numericUpDownB->Size = System::Drawing::Size(120, 20);
			this->numericUpDownB->TabIndex = 2;
			this->numericUpDownB->Leave += gcnew System::EventHandler(this, &MVCForm::numericUpDownB_Leave);
			// 
			// numericUpDownC
			// 
			this->numericUpDownC->Location = System::Drawing::Point(303, 93);
			this->numericUpDownC->Name = L"numericUpDownC";
			this->numericUpDownC->Size = System::Drawing::Size(120, 20);
			this->numericUpDownC->TabIndex = 3;
			this->numericUpDownC->Leave += gcnew System::EventHandler(this, &MVCForm::numericUpDownC_Leave);
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(162, 67);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(120, 20);
			this->textBoxB->TabIndex = 4;
			this->textBoxB->Text = L"0";
			this->textBoxB->Leave += gcnew System::EventHandler(this, &MVCForm::textBoxB_Leave);
			// 
			// textBoxC
			// 
			this->textBoxC->Location = System::Drawing::Point(303, 67);
			this->textBoxC->Name = L"textBoxC";
			this->textBoxC->Size = System::Drawing::Size(120, 20);
			this->textBoxC->TabIndex = 5;
			this->textBoxC->Text = L"0";
			this->textBoxC->Leave += gcnew System::EventHandler(this, &MVCForm::textBoxC_Leave);
			// 
			// trackBarA
			// 
			this->trackBarA->Location = System::Drawing::Point(21, 123);
			this->trackBarA->Maximum = 100;
			this->trackBarA->Name = L"trackBarA";
			this->trackBarA->Size = System::Drawing::Size(120, 45);
			this->trackBarA->TabIndex = 6;
			this->trackBarA->ValueChanged += gcnew System::EventHandler(this, &MVCForm::trackBarA_ValueChanged);
			// 
			// trackBarB
			// 
			this->trackBarB->Location = System::Drawing::Point(162, 123);
			this->trackBarB->Maximum = 100;
			this->trackBarB->Name = L"trackBarB";
			this->trackBarB->Size = System::Drawing::Size(120, 45);
			this->trackBarB->TabIndex = 7;
			this->trackBarB->ValueChanged += gcnew System::EventHandler(this, &MVCForm::trackBarB_ValueChanged);
			// 
			// trackBarC
			// 
			this->trackBarC->Location = System::Drawing::Point(303, 123);
			this->trackBarC->Maximum = 100;
			this->trackBarC->Name = L"trackBarC";
			this->trackBarC->Size = System::Drawing::Size(120, 45);
			this->trackBarC->TabIndex = 8;
			this->trackBarC->ValueChanged += gcnew System::EventHandler(this, &MVCForm::trackBarC_ValueChanged);
			// 
			// labelText
			// 
			this->labelText->AutoSize = true;
			this->labelText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelText->Location = System::Drawing::Point(45, 9);
			this->labelText->Name = L"labelText";
			this->labelText->Size = System::Drawing::Size(354, 55);
			this->labelText->TabIndex = 9;
			this->labelText->Text = L"A  <=  B  <=  C";
			// 
			// MVCForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 172);
			this->Controls->Add(this->labelText);
			this->Controls->Add(this->trackBarC);
			this->Controls->Add(this->trackBarB);
			this->Controls->Add(this->trackBarA);
			this->Controls->Add(this->textBoxC);
			this->Controls->Add(this->textBoxB);
			this->Controls->Add(this->numericUpDownC);
			this->Controls->Add(this->numericUpDownB);
			this->Controls->Add(this->numericUpDownA);
			this->Controls->Add(this->textBoxA);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MVCForm";
			this->Text = L"MVC";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MVCForm::MVCForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MVCForm::MVCForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarC))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int res;
	private: void UpdateFromModel(Object^ sender, EventArgs^ e) {
		textBoxA->Text = Convert::ToString(model->get_value_A());
		textBoxB->Text = Convert::ToString(model->get_value_B());
		textBoxC->Text = Convert::ToString(model->get_value_C());
		numericUpDownA->Text = Convert::ToString(model->get_value_A());
		numericUpDownB->Text = Convert::ToString(model->get_value_B());
		numericUpDownC->Text = Convert::ToString(model->get_value_C());
		trackBarA->Value = model->get_value_A();
		trackBarB->Value = model->get_value_B();
		trackBarC->Value = model->get_value_C();
	}
	private: System::Void textBoxA_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (Int32::TryParse(textBoxA->Text, res));
		else res = model->get_value_A();
		model->set_value_A(res);
	}
	private: System::Void textBoxB_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (Int32::TryParse(textBoxB->Text, res));
		else res = model->get_value_B();
		model->set_value_B(res);
	}
	private: System::Void textBoxC_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (Int32::TryParse(textBoxC->Text, res));
		else res = model->get_value_C();
		model->set_value_C(res);
	}
	private: System::Void numericUpDownA_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToString(numericUpDownA->Text) == "") res = model->get_value_A();
		else res = Convert::ToInt32(numericUpDownA->Value);
		model->set_value_A(res);
	}
	private: System::Void numericUpDownB_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToString(numericUpDownA->Text) == "") res = model->get_value_B();
		else res = Convert::ToInt32(numericUpDownB->Value);
		model->set_value_B(res);
	}
	private: System::Void numericUpDownC_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToString(numericUpDownA->Text) == "") res = model->get_value_C();
		else res = Convert::ToInt32(numericUpDownC->Value);
		model->set_value_C(res);
	}
	private: System::Void trackBarA_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		model->set_value_A(Convert::ToInt32(trackBarA->Value));
	}
	private: System::Void trackBarB_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		model->set_value_B(Convert::ToInt32(trackBarB->Value));
	}
	private: System::Void trackBarC_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		model->set_value_C(Convert::ToInt32(trackBarC->Value));
	}
	private: System::Void MVCForm_Load(System::Object^ sender, System::EventArgs^ e) {
		std::fstream file("Data.txt");
		if (file.is_open()) {
			int A;
			int B;
			int C;
			file >> A;
			file >> B;
			file >> C;
			model->set_value_C(C);
			model->set_value_B(B);
			model->set_value_A(A);
			file.close();
		}
	}
	private: System::Void MVCForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		String^ data = Convert::ToString(model->get_value_A()) + "\n" + Convert::ToString(model->get_value_B()) 
			+ "\n" + Convert::ToString(model->get_value_C());
		System::IO::File::WriteAllText("Data.txt", data);
	}
	};
}
