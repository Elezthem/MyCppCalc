#pragma once

namespace ElezthemDevCWinApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_minus_plus;
	private: System::Windows::Forms::Button^ btn_persent;




	private: System::Windows::Forms::Button^ btn_devide;
	private: System::Windows::Forms::Button^ btn_mult;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btn_minus;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ btn_plus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ btn_equal;
	private: System::Windows::Forms::Button^ btn_dot;



	private: System::Windows::Forms::Button^ button20;
	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;
	protected:

	protected:

	protected:

	protected:


	protected:










	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_minus_plus = (gcnew System::Windows::Forms::Button());
			this->btn_persent = (gcnew System::Windows::Forms::Button());
			this->btn_devide = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::Color::White;
			this->button_exit->Location = System::Drawing::Point(12, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(27, 26);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::Color::White;
			this->result_label->Location = System::Drawing::Point(5, 9);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(285, 57);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->btn_ac->ForeColor = System::Drawing::Color::White;
			this->btn_ac->Location = System::Drawing::Point(12, 69);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(65, 55);
			this->btn_ac->TabIndex = 2;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// btn_minus_plus
			// 
			this->btn_minus_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->btn_minus_plus->ForeColor = System::Drawing::Color::White;
			this->btn_minus_plus->Location = System::Drawing::Point(83, 69);
			this->btn_minus_plus->Name = L"btn_minus_plus";
			this->btn_minus_plus->Size = System::Drawing::Size(65, 55);
			this->btn_minus_plus->TabIndex = 3;
			this->btn_minus_plus->Text = L"+/-";
			this->btn_minus_plus->UseVisualStyleBackColor = false;
			this->btn_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_plus_Click);
			// 
			// btn_persent
			// 
			this->btn_persent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_persent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_persent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->btn_persent->ForeColor = System::Drawing::Color::White;
			this->btn_persent->Location = System::Drawing::Point(154, 69);
			this->btn_persent->Name = L"btn_persent";
			this->btn_persent->Size = System::Drawing::Size(65, 55);
			this->btn_persent->TabIndex = 4;
			this->btn_persent->Text = L"%";
			this->btn_persent->UseVisualStyleBackColor = false;
			this->btn_persent->Click += gcnew System::EventHandler(this, &MyForm::btn_persent_Click);
			// 
			// btn_devide
			// 
			this->btn_devide->BackColor = System::Drawing::Color::Gold;
			this->btn_devide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_devide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->btn_devide->ForeColor = System::Drawing::Color::White;
			this->btn_devide->Location = System::Drawing::Point(225, 69);
			this->btn_devide->Name = L"btn_devide";
			this->btn_devide->Size = System::Drawing::Size(65, 55);
			this->btn_devide->TabIndex = 5;
			this->btn_devide->Text = L"/";
			this->btn_devide->UseVisualStyleBackColor = false;
			this->btn_devide->Click += gcnew System::EventHandler(this, &MyForm::btn_devide_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::Gold;
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->btn_mult->ForeColor = System::Drawing::Color::White;
			this->btn_mult->Location = System::Drawing::Point(225, 141);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(65, 55);
			this->btn_mult->TabIndex = 9;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(154, 141);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 8;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(83, 141);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(12, 141);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 55);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::Gold;
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::Color::White;
			this->btn_minus->Location = System::Drawing::Point(225, 211);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(65, 55);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(154, 211);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 55);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(83, 211);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 55);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Gray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(12, 211);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 55);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::Gold;
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->btn_plus->ForeColor = System::Drawing::Color::White;
			this->btn_plus->Location = System::Drawing::Point(225, 281);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(65, 55);
			this->btn_plus->TabIndex = 17;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Gray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(154, 281);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 55);
			this->button14->TabIndex = 16;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(83, 281);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 55);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(12, 281);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 55);
			this->button16->TabIndex = 14;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::Gold;
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->btn_equal->ForeColor = System::Drawing::Color::White;
			this->btn_equal->Location = System::Drawing::Point(225, 353);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(65, 55);
			this->btn_equal->TabIndex = 21;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::Gray;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->btn_dot->ForeColor = System::Drawing::Color::White;
			this->btn_dot->Location = System::Drawing::Point(154, 353);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(65, 55);
			this->btn_dot->TabIndex = 20;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Gray;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(12, 353);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(136, 55);
			this->button20->TabIndex = 18;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(302, 432);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btn_devide);
			this->Controls->Add(this->btn_persent);
			this->Controls->Add(this->btn_minus_plus);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator - ElezthemDev";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);

		if (this->result_label->Text == "0" || is_equal) {
			this->result_label->Text = button->Text;
			is_equal = false;
		}
		else
			this->result_label->Text = this->result_label->Text + button->Text;
	}

	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void btn_devide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}

	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		this->user_action = action;
		this->result_label->Text = "0";
	}
	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;

		float second = System::Convert::ToDouble(this->result_label->Text);
		float res;
		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/':
			if (second == 0) {
				res = 0;
				this->result_label->ForeColor = Color::DarkRed;
				MessageBox::Show(this, "Действие невозможное", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else 
				res = this->first_num / second; 
			break;
		}
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = "0";
		this->result_label->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
	private: System::Void btn_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_persent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result_label->Text;
		if(!text->Contains(","))
			this->result_label->Text = text + ",";
	}
};
}
