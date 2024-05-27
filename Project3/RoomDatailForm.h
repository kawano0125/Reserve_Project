#pragma once
#include"ReserveForm.h"
#include"PublicData.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RoomDatailForm �̊T�v
	/// </summary>
	public ref class RoomDatailForm : public System::Windows::Forms::Form
	{
	public:
		RoomDatailForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
			LoadData();
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~RoomDatailForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_RoomdataReturn;
	private: System::Windows::Forms::Button^ b_Reserve;
	public: System::Windows::Forms::Label^ l_Roomdata;
	private:
	protected:


	private: System::Windows::Forms::ListBox^ lb_ReserveState;


	private: System::Windows::Forms::DateTimePicker^ dtp_Calendar;


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
			this->b_RoomdataReturn = (gcnew System::Windows::Forms::Button());
			this->b_Reserve = (gcnew System::Windows::Forms::Button());
			this->l_Roomdata = (gcnew System::Windows::Forms::Label());
			this->lb_ReserveState = (gcnew System::Windows::Forms::ListBox());
			this->dtp_Calendar = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// b_RoomdataReturn
			// 
			this->b_RoomdataReturn->Location = System::Drawing::Point(12, 23);
			this->b_RoomdataReturn->Name = L"b_RoomdataReturn";
			this->b_RoomdataReturn->Size = System::Drawing::Size(110, 40);
			this->b_RoomdataReturn->TabIndex = 0;
			this->b_RoomdataReturn->Text = L"�߂�";
			this->b_RoomdataReturn->UseVisualStyleBackColor = true;
			this->b_RoomdataReturn->Click += gcnew System::EventHandler(this, &RoomDatailForm::b_RoomdataReturn_Click);
			// 
			// b_Reserve
			// 
			this->b_Reserve->Location = System::Drawing::Point(225, 526);
			this->b_Reserve->Name = L"b_Reserve";
			this->b_Reserve->Size = System::Drawing::Size(150, 23);
			this->b_Reserve->TabIndex = 1;
			this->b_Reserve->Text = L"�\��";
			this->b_Reserve->UseVisualStyleBackColor = true;
			this->b_Reserve->Click += gcnew System::EventHandler(this, &RoomDatailForm::b_Reserve_Click);
			// 
			// l_Roomdata
			// 
			this->l_Roomdata->AutoSize = true;
			this->l_Roomdata->Location = System::Drawing::Point(63, 88);
			this->l_Roomdata->Name = L"l_Roomdata";
			this->l_Roomdata->Size = System::Drawing::Size(0, 12);
			this->l_Roomdata->TabIndex = 2;
			this->l_Roomdata->Click += gcnew System::EventHandler(this, &RoomDatailForm::l_Roomdata_Click);
			// 
			// lb_ReserveState
			// 
			this->lb_ReserveState->FormattingEnabled = true;
			this->lb_ReserveState->ItemHeight = 12;
			this->lb_ReserveState->Location = System::Drawing::Point(65, 164);
			this->lb_ReserveState->Name = L"lb_ReserveState";
			this->lb_ReserveState->Size = System::Drawing::Size(470, 340);
			this->lb_ReserveState->TabIndex = 3;
			// 
			// dtp_Calendar
			// 
			this->dtp_Calendar->Location = System::Drawing::Point(65, 139);
			this->dtp_Calendar->Name = L"dtp_Calendar";
			this->dtp_Calendar->Size = System::Drawing::Size(200, 19);
			this->dtp_Calendar->TabIndex = 4;
			// 
			// RoomDatailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->dtp_Calendar);
			this->Controls->Add(this->lb_ReserveState);
			this->Controls->Add(this->l_Roomdata);
			this->Controls->Add(this->b_Reserve);
			this->Controls->Add(this->b_RoomdataReturn);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"RoomDatailForm";
			this->Text = L"RoomDatailForm";
			this->Load += gcnew System::EventHandler(this, &RoomDatailForm::RoomDatailForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void LoadDataToListBox(cli::array<String^, 2>^ dataArray, int currentIndex) {
			for (int i = 0; i < currentIndex; i++) {
				lb_ReserveState->Items->Add("�\��: " + dataArray[i, 1] + ", " + dataArray[i, 2] + ", " + dataArray[i, 3] + dataArray[i, 4] + ", " + dataArray[i, 5]);
			}
		}
		void LoadData() {
			lb_ReserveState->Items->Clear();
			switch (RoomNumber)
			{
			case 1:
				LoadDataToListBox(PublicData::Room1Array, PublicData::Room1Index);
				break;
			case 2:
				LoadDataToListBox(PublicData::Room2Array, PublicData::Room2Index);
				break;
			case 3:
				LoadDataToListBox(PublicData::Room3Array, PublicData::Room3Index);
				break;
			case 4:
				LoadDataToListBox(PublicData::Room4Array, PublicData::Room4Index);
				break;
			case 5:
				LoadDataToListBox(PublicData::Room5Array, PublicData::Room5Index);
				break;
			case 6:
				LoadDataToListBox(PublicData::Room6Array, PublicData::Room6Index);
				break;
			default:
				lb_ReserveState->Items->Add("�Y���̕����̗\��͂���܂���");
				break;
			}
		}
	private: System::Void l_Roomdata_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
private: System::Void b_Reserve_Click(System::Object^ sender, System::EventArgs^ e) {
	//if (flag == 1) {
		ReserveForm^ frm = gcnew ReserveForm();
		frm->Show();
		MessageBox::Show("���O�C�����Ă�������");
	//}

}
	private: System::Void b_RoomdataReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
private: System::Void RoomDatailForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
};
}
