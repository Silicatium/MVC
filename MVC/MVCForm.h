#pragma once

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
	public:
		MVCForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
			// 
			// numericUpDownA
			// 
			this->numericUpDownA->Location = System::Drawing::Point(21, 93);
			this->numericUpDownA->Name = L"numericUpDownA";
			this->numericUpDownA->Size = System::Drawing::Size(120, 20);
			this->numericUpDownA->TabIndex = 1;
			// 
			// numericUpDownB
			// 
			this->numericUpDownB->Location = System::Drawing::Point(162, 93);
			this->numericUpDownB->Name = L"numericUpDownB";
			this->numericUpDownB->Size = System::Drawing::Size(120, 20);
			this->numericUpDownB->TabIndex = 2;
			// 
			// numericUpDownC
			// 
			this->numericUpDownC->Location = System::Drawing::Point(303, 93);
			this->numericUpDownC->Name = L"numericUpDownC";
			this->numericUpDownC->Size = System::Drawing::Size(120, 20);
			this->numericUpDownC->TabIndex = 3;
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(162, 67);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(120, 20);
			this->textBoxB->TabIndex = 4;
			// 
			// textBoxC
			// 
			this->textBoxC->Location = System::Drawing::Point(303, 67);
			this->textBoxC->Name = L"textBoxC";
			this->textBoxC->Size = System::Drawing::Size(120, 20);
			this->textBoxC->TabIndex = 5;
			// 
			// trackBarA
			// 
			this->trackBarA->Location = System::Drawing::Point(21, 123);
			this->trackBarA->Name = L"trackBarA";
			this->trackBarA->Size = System::Drawing::Size(120, 45);
			this->trackBarA->TabIndex = 6;
			// 
			// trackBarB
			// 
			this->trackBarB->Location = System::Drawing::Point(162, 123);
			this->trackBarB->Name = L"trackBarB";
			this->trackBarB->Size = System::Drawing::Size(120, 45);
			this->trackBarB->TabIndex = 7;
			// 
			// trackBarC
			// 
			this->trackBarC->Location = System::Drawing::Point(303, 123);
			this->trackBarC->Name = L"trackBarC";
			this->trackBarC->Size = System::Drawing::Size(120, 45);
			this->trackBarC->TabIndex = 8;
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
	};
}
