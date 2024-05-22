#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ReserveForm の概要
	/// </summary>
	public ref class ReserveForm : public System::Windows::Forms::Form
	{
	public:
		ReserveForm(void)
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
	private: System::Windows::Forms::Label^ l_StartHour;


	private: System::Windows::Forms::ComboBox^ cb_StartMin;
	private: System::Windows::Forms::Label^ l_StartMin;
	private: System::Windows::Forms::Label^ l_End;
	private: System::Windows::Forms::ComboBox^ cb_EndHour;
	private: System::Windows::Forms::Label^ l_EndHour;
	private: System::Windows::Forms::ComboBox^ cb_EndMin;
	private: System::Windows::Forms::Label^ l_EndMin;
	private: System::Windows::Forms::Label^ l_Num;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ l_Purpose;
	private: System::Windows::Forms::ComboBox^ cb_Purpose;








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
			this->b_ReserveReturn = (gcnew System::Windows::Forms::Button());
			this->b_Reserve = (gcnew System::Windows::Forms::Button());
			this->dtp_Calendar = (gcnew System::Windows::Forms::DateTimePicker());
			this->l_Start = (gcnew System::Windows::Forms::Label());
			this->cb_StartHour = (gcnew System::Windows::Forms::ComboBox());
			this->l_Day = (gcnew System::Windows::Forms::Label());
			this->l_StartHour = (gcnew System::Windows::Forms::Label());
			this->cb_StartMin = (gcnew System::Windows::Forms::ComboBox());
			this->l_StartMin = (gcnew System::Windows::Forms::Label());
			this->l_End = (gcnew System::Windows::Forms::Label());
			this->cb_EndHour = (gcnew System::Windows::Forms::ComboBox());
			this->l_EndHour = (gcnew System::Windows::Forms::Label());
			this->cb_EndMin = (gcnew System::Windows::Forms::ComboBox());
			this->l_EndMin = (gcnew System::Windows::Forms::Label());
			this->l_Num = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->l_Purpose = (gcnew System::Windows::Forms::Label());
			this->cb_Purpose = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// b_ReserveReturn
			// 
			this->b_ReserveReturn->Location = System::Drawing::Point(50, 50);
			this->b_ReserveReturn->Name = L"b_ReserveReturn";
			this->b_ReserveReturn->Size = System::Drawing::Size(100, 25);
			this->b_ReserveReturn->TabIndex = 0;
			this->b_ReserveReturn->Text = L"戻る";
			this->b_ReserveReturn->UseVisualStyleBackColor = true;
			// 
			// b_Reserve
			// 
			this->b_Reserve->Location = System::Drawing::Point(200, 450);
			this->b_Reserve->Name = L"b_Reserve";
			this->b_Reserve->Size = System::Drawing::Size(200, 50);
			this->b_Reserve->TabIndex = 1;
			this->b_Reserve->Text = L"予約";
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
			this->l_Start->Size = System::Drawing::Size(67, 15);
			this->l_Start->TabIndex = 3;
			this->l_Start->Text = L"開始時刻";
			// 
			// cb_StartHour
			// 
			this->cb_StartHour->FormattingEnabled = true;
			this->cb_StartHour->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"9", L"10", L"11", L"12", L"13", L"14", L"15",
					L"16", L"17", L"18"
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
			this->l_Day->Text = L"使用日";
			// 
			// l_StartHour
			// 
			this->l_StartHour->AutoSize = true;
			this->l_StartHour->Location = System::Drawing::Point(378, 122);
			this->l_StartHour->Name = L"l_StartHour";
			this->l_StartHour->Size = System::Drawing::Size(22, 15);
			this->l_StartHour->TabIndex = 6;
			this->l_StartHour->Text = L"時";
			// 
			// cb_StartMin
			// 
			this->cb_StartMin->FormattingEnabled = true;
			this->cb_StartMin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"00", L"30" });
			this->cb_StartMin->Location = System::Drawing::Point(425, 119);
			this->cb_StartMin->Name = L"cb_StartMin";
			this->cb_StartMin->Size = System::Drawing::Size(75, 23);
			this->cb_StartMin->TabIndex = 7;
			// 
			// l_StartMin
			// 
			this->l_StartMin->AutoSize = true;
			this->l_StartMin->Location = System::Drawing::Point(507, 122);
			this->l_StartMin->Name = L"l_StartMin";
			this->l_StartMin->Size = System::Drawing::Size(22, 15);
			this->l_StartMin->TabIndex = 8;
			this->l_StartMin->Text = L"分";
			// 
			// l_End
			// 
			this->l_End->AutoSize = true;
			this->l_End->Location = System::Drawing::Point(275, 175);
			this->l_End->Name = L"l_End";
			this->l_End->Size = System::Drawing::Size(67, 15);
			this->l_End->TabIndex = 9;
			this->l_End->Text = L"終了時刻";
			// 
			// cb_EndHour
			// 
			this->cb_EndHour->FormattingEnabled = true;
			this->cb_EndHour->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"9", L"10", L"11", L"12", L"13", L"14", L"15",
					L"16", L"17", L"18"
			});
			this->cb_EndHour->Location = System::Drawing::Point(297, 193);
			this->cb_EndHour->Name = L"cb_EndHour";
			this->cb_EndHour->Size = System::Drawing::Size(75, 23);
			this->cb_EndHour->TabIndex = 10;
			// 
			// l_EndHour
			// 
			this->l_EndHour->AutoSize = true;
			this->l_EndHour->Location = System::Drawing::Point(381, 200);
			this->l_EndHour->Name = L"l_EndHour";
			this->l_EndHour->Size = System::Drawing::Size(22, 15);
			this->l_EndHour->TabIndex = 11;
			this->l_EndHour->Text = L"時";
			// 
			// cb_EndMin
			// 
			this->cb_EndMin->FormattingEnabled = true;
			this->cb_EndMin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"00", L"30" });
			this->cb_EndMin->Location = System::Drawing::Point(425, 192);
			this->cb_EndMin->Name = L"cb_EndMin";
			this->cb_EndMin->Size = System::Drawing::Size(75, 23);
			this->cb_EndMin->TabIndex = 12;
			// 
			// l_EndMin
			// 
			this->l_EndMin->AutoSize = true;
			this->l_EndMin->Location = System::Drawing::Point(507, 199);
			this->l_EndMin->Name = L"l_EndMin";
			this->l_EndMin->Size = System::Drawing::Size(22, 15);
			this->l_EndMin->TabIndex = 13;
			this->l_EndMin->Text = L"分";
			// 
			// l_Num
			// 
			this->l_Num->AutoSize = true;
			this->l_Num->Location = System::Drawing::Point(50, 275);
			this->l_Num->Name = L"l_Num";
			this->l_Num->Size = System::Drawing::Size(45, 15);
			this->l_Num->TabIndex = 14;
			this->l_Num->Text = L"人数：";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(101, 272);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 15;
			// 
			// l_Purpose
			// 
			this->l_Purpose->AutoSize = true;
			this->l_Purpose->Location = System::Drawing::Point(50, 325);
			this->l_Purpose->Name = L"l_Purpose";
			this->l_Purpose->Size = System::Drawing::Size(45, 15);
			this->l_Purpose->TabIndex = 16;
			this->l_Purpose->Text = L"目的：";
			// 
			// cb_Purpose
			// 
			this->cb_Purpose->FormattingEnabled = true;
			this->cb_Purpose->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"会議", L"プレゼンテーション", L"その他" });
			this->cb_Purpose->Location = System::Drawing::Point(101, 322);
			this->cb_Purpose->Name = L"cb_Purpose";
			this->cb_Purpose->Size = System::Drawing::Size(300, 23);
			this->cb_Purpose->TabIndex = 17;
			// 
			// ReserveForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->cb_Purpose);
			this->Controls->Add(this->l_Purpose);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->l_Num);
			this->Controls->Add(this->l_EndMin);
			this->Controls->Add(this->cb_EndMin);
			this->Controls->Add(this->l_EndHour);
			this->Controls->Add(this->cb_EndHour);
			this->Controls->Add(this->l_End);
			this->Controls->Add(this->l_StartMin);
			this->Controls->Add(this->cb_StartMin);
			this->Controls->Add(this->l_StartHour);
			this->Controls->Add(this->l_Day);
			this->Controls->Add(this->cb_StartHour);
			this->Controls->Add(this->l_Start);
			this->Controls->Add(this->dtp_Calendar);
			this->Controls->Add(this->b_Reserve);
			this->Controls->Add(this->b_ReserveReturn);
			this->Name = L"ReserveForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"予約フォーム";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
