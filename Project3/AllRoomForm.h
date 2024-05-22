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
	private: System::Windows::Forms::Button^ b_Room1;
	private: System::Windows::Forms::Button^ b_Room2;
	private: System::Windows::Forms::Button^ b_Room4;
	private: System::Windows::Forms::Button^ b_Room3;
	private: System::Windows::Forms::Button^ b_Room6;






	private: System::Windows::Forms::Button^ b_Room5;





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
			this->b_Room1 = (gcnew System::Windows::Forms::Button());
			this->b_Room2 = (gcnew System::Windows::Forms::Button());
			this->b_Room4 = (gcnew System::Windows::Forms::Button());
			this->b_Room3 = (gcnew System::Windows::Forms::Button());
			this->b_Room6 = (gcnew System::Windows::Forms::Button());
			this->b_Room5 = (gcnew System::Windows::Forms::Button());
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
			// b_Room1
			// 
			this->b_Room1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Room1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->b_Room1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->b_Room1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room1->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room1->Location = System::Drawing::Point(50, 170);
			this->b_Room1->Name = L"b_Room1";
			this->b_Room1->Size = System::Drawing::Size(200, 70);
			this->b_Room1->TabIndex = 3;
			this->b_Room1->Text = L"Room1";
			this->b_Room1->UseVisualStyleBackColor = true;
			// 
			// b_Room2
			// 
			this->b_Room2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Room2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->b_Room2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_Room2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room2->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room2->Location = System::Drawing::Point(350, 170);
			this->b_Room2->Name = L"b_Room2";
			this->b_Room2->Size = System::Drawing::Size(200, 70);
			this->b_Room2->TabIndex = 4;
			this->b_Room2->Text = L"Room2";
			this->b_Room2->UseVisualStyleBackColor = true;
			// 
			// b_Room4
			// 
			this->b_Room4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			this->b_Room4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room4->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room4->Location = System::Drawing::Point(350, 290);
			this->b_Room4->Name = L"b_Room4";
			this->b_Room4->Size = System::Drawing::Size(200, 70);
			this->b_Room4->TabIndex = 6;
			this->b_Room4->Text = L"Room4";
			this->b_Room4->UseVisualStyleBackColor = true;
			// 
			// b_Room3
			// 
			this->b_Room3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->b_Room3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->b_Room3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->b_Room3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room3->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room3->Location = System::Drawing::Point(50, 290);
			this->b_Room3->Name = L"b_Room3";
			this->b_Room3->Size = System::Drawing::Size(200, 70);
			this->b_Room3->TabIndex = 5;
			this->b_Room3->Text = L"Room3";
			this->b_Room3->UseVisualStyleBackColor = true;
			// 
			// b_Room6
			// 
			this->b_Room6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Fuchsia;
			this->b_Room6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room6->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room6->Location = System::Drawing::Point(350, 410);
			this->b_Room6->Name = L"b_Room6";
			this->b_Room6->Size = System::Drawing::Size(200, 70);
			this->b_Room6->TabIndex = 8;
			this->b_Room6->Text = L"Room6";
			this->b_Room6->UseVisualStyleBackColor = true;
			// 
			// b_Room5
			// 
			this->b_Room5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->b_Room5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Blue;
			this->b_Room5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_Room5->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_Room5->Location = System::Drawing::Point(50, 410);
			this->b_Room5->Name = L"b_Room5";
			this->b_Room5->Size = System::Drawing::Size(200, 70);
			this->b_Room5->TabIndex = 7;
			this->b_Room5->Text = L"Room5";
			this->b_Room5->UseVisualStyleBackColor = true;
			// 
			// AllRoomForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->b_Room6);
			this->Controls->Add(this->b_Room5);
			this->Controls->Add(this->b_Room4);
			this->Controls->Add(this->b_Room3);
			this->Controls->Add(this->b_Room2);
			this->Controls->Add(this->b_Room1);
			this->Controls->Add(this->b_Logout);
			this->Controls->Add(this->b_Mydata);
			this->Controls->Add(this->b_Search);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AllRoomForm";
			this->Text = L"AllRoomForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
