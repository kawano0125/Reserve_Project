#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AllRoomForm の概要
	/// </summary>
	public ref class AllRoomForm : public System::Windows::Forms::Form
	{
	public:
		AllRoomForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~AllRoomForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b_Search;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->b_Search = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b_Search
			// 
			this->b_Search->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Search->Location = System::Drawing::Point(25, 30);
			this->b_Search->Name = L"b_Search";
			this->b_Search->Size = System::Drawing::Size(150, 50);
			this->b_Search->TabIndex = 0;
			this->b_Search->Text = L"検索";
			this->b_Search->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(225, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"検索";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(425, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"検索";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// AllRoomForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->b_Search);
			this->Name = L"AllRoomForm";
			this->Text = L"AllRoomForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
