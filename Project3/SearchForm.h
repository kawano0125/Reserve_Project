#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SearchForm の概要
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
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
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtp_Calender;
	protected:

	protected:

	private: System::Windows::Forms::Button^ b_SearchReturn;
	private: System::Windows::Forms::ComboBox^ cb_StartHour;
	private: System::Windows::Forms::ComboBox^ cb_StartMin;





	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ l_Start;
	private: System::Windows::Forms::Label^ l_End;
	private: System::Windows::Forms::Label^ l_NumPeople;
	private: System::Windows::Forms::Label^ l_Num;








	private: System::Windows::Forms::Label^ l_EndMin;

	private: System::Windows::Forms::Label^ l_StartMin;

	private: System::Windows::Forms::Label^ l_StartHour;
	private: System::Windows::Forms::Label^ l_EndHour;
	private: System::Windows::Forms::Button^ b_Search;



	private: System::Windows::Forms::Label^ l_Date;



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
			this->dtp_Calender = (gcnew System::Windows::Forms::DateTimePicker());
			this->b_SearchReturn = (gcnew System::Windows::Forms::Button());
			this->cb_StartHour = (gcnew System::Windows::Forms::ComboBox());
			this->cb_StartMin = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->l_Start = (gcnew System::Windows::Forms::Label());
			this->l_End = (gcnew System::Windows::Forms::Label());
			this->l_NumPeople = (gcnew System::Windows::Forms::Label());
			this->l_Num = (gcnew System::Windows::Forms::Label());
			this->l_EndMin = (gcnew System::Windows::Forms::Label());
			this->l_StartMin = (gcnew System::Windows::Forms::Label());
			this->l_StartHour = (gcnew System::Windows::Forms::Label());
			this->l_EndHour = (gcnew System::Windows::Forms::Label());
			this->b_Search = (gcnew System::Windows::Forms::Button());
			this->l_Date = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dtp_Calender
			// 
			this->dtp_Calender->Location = System::Drawing::Point(12, 192);
			this->dtp_Calender->Name = L"dtp_Calender";
			this->dtp_Calender->Size = System::Drawing::Size(248, 22);
			this->dtp_Calender->TabIndex = 0;
			// 
			// b_SearchReturn
			// 
			this->b_SearchReturn->Location = System::Drawing::Point(12, 12);
			this->b_SearchReturn->Name = L"b_SearchReturn";
			this->b_SearchReturn->Size = System::Drawing::Size(98, 40);
			this->b_SearchReturn->TabIndex = 2;
			this->b_SearchReturn->Text = L"戻る";
			this->b_SearchReturn->UseVisualStyleBackColor = true;
			// 
			// cb_StartHour
			// 
			this->cb_StartHour->FormattingEnabled = true;
			this->cb_StartHour->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"9", L"10", L"11", L"12", L"13", L"14", L"15",
					L"16", L"17", L"18"
			});
			this->cb_StartHour->Location = System::Drawing::Point(306, 192);
			this->cb_StartHour->Name = L"cb_StartHour";
			this->cb_StartHour->Size = System::Drawing::Size(75, 23);
			this->cb_StartHour->TabIndex = 3;
			// 
			// cb_StartMin
			// 
			this->cb_StartMin->FormattingEnabled = true;
			this->cb_StartMin->Location = System::Drawing::Point(448, 192);
			this->cb_StartMin->Name = L"cb_StartMin";
			this->cb_StartMin->Size = System::Drawing::Size(75, 23);
			this->cb_StartMin->TabIndex = 4;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(306, 295);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(75, 23);
			this->comboBox3->TabIndex = 5;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(448, 295);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(75, 23);
			this->comboBox4->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(448, 404);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 22);
			this->textBox1->TabIndex = 7;
			// 
			// l_Start
			// 
			this->l_Start->AutoSize = true;
			this->l_Start->Location = System::Drawing::Point(287, 164);
			this->l_Start->Name = L"l_Start";
			this->l_Start->Size = System::Drawing::Size(67, 15);
			this->l_Start->TabIndex = 8;
			this->l_Start->Text = L"開始時刻";
			// 
			// l_End
			// 
			this->l_End->AutoSize = true;
			this->l_End->Location = System::Drawing::Point(287, 264);
			this->l_End->Name = L"l_End";
			this->l_End->Size = System::Drawing::Size(67, 15);
			this->l_End->TabIndex = 9;
			this->l_End->Text = L"終了時刻";
			// 
			// l_NumPeople
			// 
			this->l_NumPeople->AutoSize = true;
			this->l_NumPeople->Location = System::Drawing::Point(287, 386);
			this->l_NumPeople->Name = L"l_NumPeople";
			this->l_NumPeople->Size = System::Drawing::Size(67, 15);
			this->l_NumPeople->TabIndex = 10;
			this->l_NumPeople->Text = L"使用人数";
			// 
			// l_Num
			// 
			this->l_Num->AutoSize = true;
			this->l_Num->Location = System::Drawing::Point(529, 407);
			this->l_Num->Name = L"l_Num";
			this->l_Num->Size = System::Drawing::Size(22, 15);
			this->l_Num->TabIndex = 11;
			this->l_Num->Text = L"人";
			// 
			// l_EndMin
			// 
			this->l_EndMin->AutoSize = true;
			this->l_EndMin->Location = System::Drawing::Point(529, 298);
			this->l_EndMin->Name = L"l_EndMin";
			this->l_EndMin->Size = System::Drawing::Size(22, 15);
			this->l_EndMin->TabIndex = 12;
			this->l_EndMin->Text = L"分";
			// 
			// l_StartMin
			// 
			this->l_StartMin->AutoSize = true;
			this->l_StartMin->Location = System::Drawing::Point(529, 195);
			this->l_StartMin->Name = L"l_StartMin";
			this->l_StartMin->Size = System::Drawing::Size(22, 15);
			this->l_StartMin->TabIndex = 13;
			this->l_StartMin->Text = L"分";
			// 
			// l_StartHour
			// 
			this->l_StartHour->AutoSize = true;
			this->l_StartHour->Location = System::Drawing::Point(387, 195);
			this->l_StartHour->Name = L"l_StartHour";
			this->l_StartHour->Size = System::Drawing::Size(22, 15);
			this->l_StartHour->TabIndex = 14;
			this->l_StartHour->Text = L"時";
			// 
			// l_EndHour
			// 
			this->l_EndHour->AutoSize = true;
			this->l_EndHour->Location = System::Drawing::Point(387, 298);
			this->l_EndHour->Name = L"l_EndHour";
			this->l_EndHour->Size = System::Drawing::Size(22, 15);
			this->l_EndHour->TabIndex = 15;
			this->l_EndHour->Text = L"時";
			// 
			// b_Search
			// 
			this->b_Search->Location = System::Drawing::Point(375, 479);
			this->b_Search->Name = L"b_Search";
			this->b_Search->Size = System::Drawing::Size(98, 40);
			this->b_Search->TabIndex = 16;
			this->b_Search->Text = L"検索";
			this->b_Search->UseVisualStyleBackColor = true;
			// 
			// l_Date
			// 
			this->l_Date->AutoSize = true;
			this->l_Date->Location = System::Drawing::Point(12, 164);
			this->l_Date->Name = L"l_Date";
			this->l_Date->Size = System::Drawing::Size(52, 15);
			this->l_Date->TabIndex = 17;
			this->l_Date->Text = L"使用日";
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->l_Date);
			this->Controls->Add(this->b_Search);
			this->Controls->Add(this->l_EndHour);
			this->Controls->Add(this->l_StartHour);
			this->Controls->Add(this->l_StartMin);
			this->Controls->Add(this->l_EndMin);
			this->Controls->Add(this->l_Num);
			this->Controls->Add(this->l_NumPeople);
			this->Controls->Add(this->l_End);
			this->Controls->Add(this->l_Start);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->cb_StartMin);
			this->Controls->Add(this->cb_StartHour);
			this->Controls->Add(this->b_SearchReturn);
			this->Controls->Add(this->dtp_Calender);
			this->Name = L"SearchForm";
			this->Text = L"SearchForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
