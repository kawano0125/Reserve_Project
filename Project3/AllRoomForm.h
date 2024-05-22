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
	private: System::Windows::Forms::Button^ b_Mydata;
	private: System::Windows::Forms::Button^ b_Logout;


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
			this->b_Mydata = (gcnew System::Windows::Forms::Button());
			this->b_Logout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// b_Search
			// 
			this->b_Search->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Search->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->b_Search->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Lime;
			this->b_Search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Search->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Search->Location = System::Drawing::Point(25, 30);
			this->b_Search->Name = L"b_Search";
			this->b_Search->Size = System::Drawing::Size(150, 50);
			this->b_Search->TabIndex = 0;
			this->b_Search->Text = L"検索";
			this->b_Search->UseVisualStyleBackColor = true;
			// 
			// b_Mydata
			// 
			this->b_Mydata->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Mydata->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Mydata->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->b_Mydata->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Mydata->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Mydata->Location = System::Drawing::Point(225, 30);
			this->b_Mydata->Name = L"b_Mydata";
			this->b_Mydata->Size = System::Drawing::Size(150, 50);
			this->b_Mydata->TabIndex = 1;
			this->b_Mydata->Text = L"マイページ";
			this->b_Mydata->UseVisualStyleBackColor = true;
			// 
			// b_Logout
			// 
			this->b_Logout->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Logout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->b_Logout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Logout->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Logout->Location = System::Drawing::Point(425, 30);
			this->b_Logout->Name = L"b_Logout";
			this->b_Logout->Size = System::Drawing::Size(150, 50);
			this->b_Logout->TabIndex = 2;
			this->b_Logout->Text = L"ログアウト";
			this->b_Logout->UseVisualStyleBackColor = true;
			// 
			// AllRoomForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->b_Logout);
			this->Controls->Add(this->b_Mydata);
			this->Controls->Add(this->b_Search);
			this->Name = L"AllRoomForm";
			this->Text = L"AllRoomForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
