#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RoomDatailForm の概要
	/// </summary>
	public ref class RoomDatailForm : public System::Windows::Forms::Form
	{
	public:
		RoomDatailForm(void)
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
			this->b_RoomdataReturn->Text = L"戻る";
			this->b_RoomdataReturn->UseVisualStyleBackColor = true;
			// 
			// b_Reserve
			// 
			this->b_Reserve->Location = System::Drawing::Point(225, 526);
			this->b_Reserve->Name = L"b_Reserve";
			this->b_Reserve->Size = System::Drawing::Size(150, 23);
			this->b_Reserve->TabIndex = 1;
			this->b_Reserve->Text = L"予約";
			this->b_Reserve->UseVisualStyleBackColor = true;
			// 
			// l_Roomdata
			// 
			this->l_Roomdata->AutoSize = true;
			this->l_Roomdata->Location = System::Drawing::Point(63, 88);
			this->l_Roomdata->Name = L"l_Roomdata";
			this->l_Roomdata->Size = System::Drawing::Size(35, 12);
			this->l_Roomdata->TabIndex = 2;
			this->l_Roomdata->Text = L"label1";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void l_Roomdata_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
