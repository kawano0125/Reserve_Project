#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MydataForm �̊T�v
	/// </summary>
	public ref class MydataForm : public System::Windows::Forms::Form
	{
	public:
		MydataForm(void)
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
		~MydataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_MydataReturn;
	private: System::Windows::Forms::Button^ b_Logout;
	private: System::Windows::Forms::Button^ b_Detail;
	private: System::Windows::Forms::Button^ b_Delete;
	protected:

	protected:



	private: System::Windows::Forms::Label^ l_name;
	private: System::Windows::Forms::Label^ l_Namedata;


	private: System::Windows::Forms::Label^ l_Password;
	private: System::Windows::Forms::Label^ l_Passworddata;
	private: System::Windows::Forms::CheckedListBox^ clb_Reservedata;






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
			this->b_MydataReturn = (gcnew System::Windows::Forms::Button());
			this->b_Logout = (gcnew System::Windows::Forms::Button());
			this->b_Detail = (gcnew System::Windows::Forms::Button());
			this->b_Delete = (gcnew System::Windows::Forms::Button());
			this->l_name = (gcnew System::Windows::Forms::Label());
			this->l_Namedata = (gcnew System::Windows::Forms::Label());
			this->l_Password = (gcnew System::Windows::Forms::Label());
			this->l_Passworddata = (gcnew System::Windows::Forms::Label());
			this->clb_Reservedata = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// b_MydataReturn
			// 
			this->b_MydataReturn->Location = System::Drawing::Point(12, 12);
			this->b_MydataReturn->Name = L"b_MydataReturn";
			this->b_MydataReturn->Size = System::Drawing::Size(75, 23);
			this->b_MydataReturn->TabIndex = 0;
			this->b_MydataReturn->Text = L"�߂�";
			this->b_MydataReturn->UseVisualStyleBackColor = true;
			// 
			// b_Logout
			// 
			this->b_Logout->Location = System::Drawing::Point(495, 12);
			this->b_Logout->Name = L"b_Logout";
			this->b_Logout->Size = System::Drawing::Size(75, 23);
			this->b_Logout->TabIndex = 1;
			this->b_Logout->Text = L"���O�A�E�g";
			this->b_Logout->UseVisualStyleBackColor = true;
			// 
			// b_Detail
			// 
			this->b_Detail->Location = System::Drawing::Point(89, 449);
			this->b_Detail->Name = L"b_Detail";
			this->b_Detail->Size = System::Drawing::Size(75, 23);
			this->b_Detail->TabIndex = 2;
			this->b_Detail->Text = L"�ڍ�";
			this->b_Detail->UseVisualStyleBackColor = true;
			// 
			// b_Delete
			// 
			this->b_Delete->Location = System::Drawing::Point(404, 449);
			this->b_Delete->Name = L"b_Delete";
			this->b_Delete->Size = System::Drawing::Size(75, 23);
			this->b_Delete->TabIndex = 3;
			this->b_Delete->Text = L"�폜";
			this->b_Delete->UseVisualStyleBackColor = true;
			// 
			// l_name
			// 
			this->l_name->AutoSize = true;
			this->l_name->Location = System::Drawing::Point(138, 99);
			this->l_name->Name = L"l_name";
			this->l_name->Size = System::Drawing::Size(78, 15);
			this->l_name->TabIndex = 4;
			this->l_name->Text = L"���[�U�[���F";
			// 
			// l_Namedata
			// 
			this->l_Namedata->AutoSize = true;
			this->l_Namedata->Location = System::Drawing::Point(277, 99);
			this->l_Namedata->Name = L"l_Namedata";
			this->l_Namedata->Size = System::Drawing::Size(41, 15);
			this->l_Namedata->TabIndex = 5;
			this->l_Namedata->Text = L"name";
			// 
			// l_Password
			// 
			this->l_Password->AutoSize = true;
			this->l_Password->Location = System::Drawing::Point(144, 161);
			this->l_Password->Name = L"l_Password";
			this->l_Password->Size = System::Drawing::Size(72, 15);
			this->l_Password->TabIndex = 6;
			this->l_Password->Text = L"�p�X���[�h�F";
			// 
			// l_Passworddata
			// 
			this->l_Passworddata->AutoSize = true;
			this->l_Passworddata->Location = System::Drawing::Point(277, 161);
			this->l_Passworddata->Name = L"l_Passworddata";
			this->l_Passworddata->Size = System::Drawing::Size(35, 15);
			this->l_Passworddata->TabIndex = 7;
			this->l_Passworddata->Text = L"pass";
			// 
			// clb_Reservedata
			// 
			this->clb_Reservedata->FormattingEnabled = true;
			this->clb_Reservedata->Location = System::Drawing::Point(147, 267);
			this->clb_Reservedata->Name = L"clb_Reservedata";
			this->clb_Reservedata->Size = System::Drawing::Size(120, 89);
			this->clb_Reservedata->TabIndex = 8;
			// 
			// MydataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->clb_Reservedata);
			this->Controls->Add(this->l_Passworddata);
			this->Controls->Add(this->l_Password);
			this->Controls->Add(this->l_Namedata);
			this->Controls->Add(this->l_name);
			this->Controls->Add(this->b_Delete);
			this->Controls->Add(this->b_Detail);
			this->Controls->Add(this->b_Logout);
			this->Controls->Add(this->b_MydataReturn);
			this->Name = L"MydataForm";
			this->Text = L"MydataForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
