#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AllRoomForm �̊T�v
	/// </summary>
	public ref class AllRoomForm : public System::Windows::Forms::Form
	{
	public:
		AllRoomForm(void)
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
		~AllRoomForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_Search;
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
			this->b_Search = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b_Search
			// 
			this->b_Search->Font = (gcnew System::Drawing::Font(L"�l�r �o����", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Search->Location = System::Drawing::Point(12, 31);
			this->b_Search->Name = L"b_Search";
			this->b_Search->Size = System::Drawing::Size(144, 48);
			this->b_Search->TabIndex = 0;
			this->b_Search->Text = L"����";
			this->b_Search->UseVisualStyleBackColor = true;
			// 
			// AllRoomForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 527);
			this->Controls->Add(this->b_Search);
			this->Name = L"AllRoomForm";
			this->Text = L"AllRoomForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
