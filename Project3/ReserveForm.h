#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ReserveForm �̊T�v
	/// </summary>
	public ref class ReserveForm : public System::Windows::Forms::Form
	{
	public:
		ReserveForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~ReserveForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_ReserveReturn;
	private: System::Windows::Forms::Button^ b_Reserve;
	private: System::Windows::Forms::DateTimePicker^ dtp_Calendar;
	private: System::Windows::Forms::Label^ l_Start;
	private: System::Windows::Forms::ComboBox^ cb_StartHour;
	private: System::Windows::Forms::Label^ l_Day;
	private: System::Windows::Forms::Label^ label1;

	protected:

	protected:

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->b_ReserveReturn = (gcnew System::Windows::Forms::Button());
			this->b_Reserve = (gcnew System::Windows::Forms::Button());
			this->dtp_Calendar = (gcnew System::Windows::Forms::DateTimePicker());
			this->l_Start = (gcnew System::Windows::Forms::Label());
			this->cb_StartHour = (gcnew System::Windows::Forms::ComboBox());
			this->l_Day = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// b_ReserveReturn
			// 
			this->b_ReserveReturn->Location = System::Drawing::Point(50, 50);
			this->b_ReserveReturn->Name = L"b_ReserveReturn";
			this->b_ReserveReturn->Size = System::Drawing::Size(100, 25);
			this->b_ReserveReturn->TabIndex = 0;
			this->b_ReserveReturn->Text = L"�߂�";
			this->b_ReserveReturn->UseVisualStyleBackColor = true;
			// 
			// b_Reserve
			// 
			this->b_Reserve->Location = System::Drawing::Point(200, 450);
			this->b_Reserve->Name = L"b_Reserve";
			this->b_Reserve->Size = System::Drawing::Size(200, 50);
			this->b_Reserve->TabIndex = 1;
			this->b_Reserve->Text = L"�\��";
			this->b_Reserve->UseVisualStyleBackColor = true;
			// 
			// dtp_Calendar
			// 
			this->dtp_Calendar->Location = System::Drawing::Point(53, 120);
			this->dtp_Calendar->Name = L"dtp_Calendar";
			this->dtp_Calendar->Size = System::Drawing::Size(200, 22);
			this->dtp_Calendar->TabIndex = 2;
			// 
			// l_Start
			// 
			this->l_Start->AutoSize = true;
			this->l_Start->Location = System::Drawing::Point(275, 100);
			this->l_Start->Name = L"l_Start";
			this->l_Start->Size = System::Drawing::Size(37, 15);
			this->l_Start->TabIndex = 3;
			this->l_Start->Text = L"�J�n";
			// 
			// cb_StartHour
			// 
			this->cb_StartHour->FormattingEnabled = true;
			this->cb_StartHour->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"9", L"10", L"11", L"12", L"13", L"14", L"15",
					L"16", L"17"
			});
			this->cb_StartHour->Location = System::Drawing::Point(297, 119);
			this->cb_StartHour->Name = L"cb_StartHour";
			this->cb_StartHour->Size = System::Drawing::Size(75, 23);
			this->cb_StartHour->TabIndex = 4;
			// 
			// l_Day
			// 
			this->l_Day->AutoSize = true;
			this->l_Day->Location = System::Drawing::Point(50, 100);
			this->l_Day->Name = L"l_Day";
			this->l_Day->Size = System::Drawing::Size(52, 15);
			this->l_Day->TabIndex = 5;
			this->l_Day->Text = L"�g�p��";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(378, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"��";
			// 
			// ReserveForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->l_Day);
			this->Controls->Add(this->cb_StartHour);
			this->Controls->Add(this->l_Start);
			this->Controls->Add(this->dtp_Calendar);
			this->Controls->Add(this->b_Reserve);
			this->Controls->Add(this->b_ReserveReturn);
			this->Name = L"ReserveForm";
			this->Text = L"ReserveForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
