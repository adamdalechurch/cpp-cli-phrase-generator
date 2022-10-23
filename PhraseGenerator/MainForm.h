#pragma once
namespace PhraseGenerator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbSeperator;

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnGenerate;
	private: System::Windows::Forms::Button^ btnClearTerms;
	private: System::Windows::Forms::Button^ btnAddTerm;
	private: System::Windows::Forms::ListBox^ lbTerms1;
	private: System::Windows::Forms::TextBox^ tbTerm;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnAdd2;
	private: System::Windows::Forms::ListBox^ lbTerms2;
	private: System::Windows::Forms::TextBox^ tbTerm2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnAdd3;
	private: System::Windows::Forms::ListBox^ lbTerms3;
	private: System::Windows::Forms::TextBox^ tbTerm3;
	private: System::Windows::Forms::ListBox^ lbPhrases;
	private: System::Windows::Forms::Label^ label4;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbSeperator = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->btnClearTerms = (gcnew System::Windows::Forms::Button());
			this->btnAddTerm = (gcnew System::Windows::Forms::Button());
			this->lbTerms1 = (gcnew System::Windows::Forms::ListBox());
			this->tbTerm = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnAdd2 = (gcnew System::Windows::Forms::Button());
			this->lbTerms2 = (gcnew System::Windows::Forms::ListBox());
			this->tbTerm2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnAdd3 = (gcnew System::Windows::Forms::Button());
			this->lbTerms3 = (gcnew System::Windows::Forms::ListBox());
			this->tbTerm3 = (gcnew System::Windows::Forms::TextBox());
			this->lbPhrases = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());

			this->SuspendLayout();
			// 
			// tbSeperator
			// 
			this->tbSeperator->Location = System::Drawing::Point(21, 24);
			this->tbSeperator->Name = L"tbSeperator";
			this->tbSeperator->Size = System::Drawing::Size(100, 20);
			this->tbSeperator->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Seperator";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Terms1";
			// 
			// btnGenerate
			// 
			this->btnGenerate->Location = System::Drawing::Point(21, 668);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(75, 23);
			this->btnGenerate->TabIndex = 8;
			this->btnGenerate->Text = L"Generate";
			this->btnGenerate->UseVisualStyleBackColor = true;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &MainForm::btnGenerate_Click);
			// 
			// btnClearTerms
			// 
			this->btnClearTerms->Location = System::Drawing::Point(214, 60);
			this->btnClearTerms->Name = L"btnClearTerms";
			this->btnClearTerms->Size = System::Drawing::Size(49, 23);
			this->btnClearTerms->TabIndex = 16;
			this->btnClearTerms->Text = L"Clear";
			this->btnClearTerms->UseVisualStyleBackColor = true;
			this->btnClearTerms->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);

			// 
			// btnAddTerm
			// 
			this->btnAddTerm->Location = System::Drawing::Point(159, 61);
			this->btnAddTerm->Name = L"btnAddTerm";
			this->btnAddTerm->Size = System::Drawing::Size(49, 23);
			this->btnAddTerm->TabIndex = 15;
			this->btnAddTerm->Text = L"Add";
			this->btnAddTerm->UseVisualStyleBackColor = true;
			this->btnAddTerm->Click += gcnew System::EventHandler(this, &MainForm::btnAddTerm_Click);
			// 
			// lbTerms1
			// 
			this->lbTerms1->FormattingEnabled = true;
			this->lbTerms1->Location = System::Drawing::Point(21, 112);
			this->lbTerms1->Name = L"lbTerms1";
			this->lbTerms1->Size = System::Drawing::Size(173, 134);
			this->lbTerms1->TabIndex = 14;
			// 
			// tbTerm
			// 
			this->tbTerm->Location = System::Drawing::Point(21, 63);
			this->tbTerm->Name = L"tbTerm";
			this->tbTerm->Size = System::Drawing::Size(100, 20);
			this->tbTerm->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Term";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(214, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::btnClear2_Click);

			// 
			// btnAdd2
			// 
			this->btnAdd2->Location = System::Drawing::Point(159, 260);
			this->btnAdd2->Name = L"btnAdd2";
			this->btnAdd2->Size = System::Drawing::Size(49, 23);
			this->btnAdd2->TabIndex = 20;
			this->btnAdd2->Text = L"Add";
			this->btnAdd2->UseVisualStyleBackColor = true;
			this->btnAdd2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// lbTerms2
			// 
			this->lbTerms2->FormattingEnabled = true;
			this->lbTerms2->Location = System::Drawing::Point(21, 311);
			this->lbTerms2->Name = L"lbTerms2";
			this->lbTerms2->Size = System::Drawing::Size(173, 134);
			this->lbTerms2->TabIndex = 19;
			// 
			// tbTerm2
			// 
			this->tbTerm2->Location = System::Drawing::Point(21, 262);
			this->tbTerm2->Name = L"tbTerm2";
			this->tbTerm2->Size = System::Drawing::Size(100, 20);
			this->tbTerm2->TabIndex = 18;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(214, 464);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::btnClear3_Click);

			// 
			// btnAdd3
			// 
			this->btnAdd3->Location = System::Drawing::Point(159, 465);
			this->btnAdd3->Name = L"btnAdd3";
			this->btnAdd3->Size = System::Drawing::Size(49, 23);
			this->btnAdd3->TabIndex = 24;
			this->btnAdd3->Text = L"Add";
			this->btnAdd3->UseVisualStyleBackColor = true;
			this->btnAdd3->Click += gcnew System::EventHandler(this, &MainForm::btnAdd3_Click);
			// 
			// lbTerms3
			// 
			this->lbTerms3->FormattingEnabled = true;
			this->lbTerms3->Location = System::Drawing::Point(21, 516);
			this->lbTerms3->Name = L"lbTerms3";
			this->lbTerms3->Size = System::Drawing::Size(173, 134);
			this->lbTerms3->TabIndex = 23;
			// 
			// tbTerm3
			// 
			this->tbTerm3->Location = System::Drawing::Point(21, 467);
			this->tbTerm3->Name = L"tbTerm3";
			this->tbTerm3->Size = System::Drawing::Size(100, 20);
			this->tbTerm3->TabIndex = 22;
			// 
			// lbPhrases
			// 
			this->lbPhrases->FormattingEnabled = true;
			this->lbPhrases->Location = System::Drawing::Point(331, 112);
			this->lbPhrases->Name = L"lbPhrases";
			this->lbPhrases->Size = System::Drawing::Size(268, 537);
			this->lbPhrases->TabIndex = 26;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(328, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Phrases";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 773);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lbPhrases);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnAdd3);
			this->Controls->Add(this->lbTerms3);
			this->Controls->Add(this->tbTerm3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnAdd2);
			this->Controls->Add(this->lbTerms2);
			this->Controls->Add(this->tbTerm2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnClearTerms);
			this->Controls->Add(this->btnAddTerm);
			this->Controls->Add(this->lbTerms1);
			this->Controls->Add(this->tbTerm);
			this->Controls->Add(this->btnGenerate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbSeperator);
			this->Controls->Add(this->label2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

			lbTerms1->Items->Add("Hello");
			lbTerms1->Items->Add("Goodbye");
			lbTerms1->Items->Add("Salutations");
			lbTerms1->Items->Add("PeaceOut");

			lbTerms2->Items->Add("Brave");
			lbTerms2->Items->Add("New");
			lbTerms2->Items->Add("Ugly");

			lbTerms3->Items->Add("World");
			lbTerms3->Items->Add("Planet");
			lbTerms3->Items->Add("Humanity");

		}
		private: System::Void btnAddTerm_Click(System::Object^ sender, System::EventArgs^ e) {
			this->lbTerms1->Items->Add(this->lbTerms1->Text + this->tbTerm->Text);
		}
		private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
			this->lbTerms1->Items->Clear();
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->lbTerms2->Items->Add(this->lbTerms2->Text + this->tbTerm2->Text);
		}
		private: System::Void btnClear2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->lbTerms2->Items->Clear();
		}
		private: System::Void btnAdd3_Click(System::Object^ sender, System::EventArgs^ e) {
			this->lbTerms3->Items->Add(this->lbTerms3->Text + this->tbTerm3->Text);
		}
		private: System::Void btnClear3_Click(System::Object^ sender, System::EventArgs^ e) {
			this->lbTerms3->Items->Clear();
		}
		private: System::Void btnGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
			List<ListBox::ObjectCollection^>^ items = gcnew List<ListBox::ObjectCollection^>();
			
			if (this->lbTerms1->Items->Count == 0) {
				ShowError("Please enter at least 1 term in list 1");
			}

			if (this->lbTerms2->Items->Count == 0) {
				ShowError("Please enter at least 1 term in list 2");
			}

			if (this->lbTerms3->Items->Count == 0) {
				ShowError("Please enter at least 1 term in list 1");
			}

			this->lbPhrases->Items->Clear();
			items->Add(this->lbTerms1->Items);
			items->Add(this->lbTerms2->Items);
			items->Add(this->lbTerms3->Items);
			int num_permutations = this->lbTerms1->Items->Count * this->lbTerms2->Items->Count * this->lbTerms3->Items->Count;
			Permute(items, num_permutations);
		}

		private: void Permute(List<ListBox::ObjectCollection^>^ pItems, int _num_permutations) {

			for (int x = 0; x < pItems->Count; x++) {
				if (this->lbPhrases->Items->Count == _num_permutations)
					return;
				PermuteNext(pItems[0], 0, gcnew array<System::String^>(pItems->Count), _num_permutations, pItems);
			}
		}

		private: void PermuteNext(ListBox::ObjectCollection^ pItem, int index, array<System::String^>^ perm, int _num_permutations, List<ListBox::ObjectCollection^>^ pItems)
		{
		   int i = index;

		   for (int x = 0; x < pItem->Count; x++) {
			   if (i >= perm->Length)
				   return;
			   else
				   perm[i] = pItem[x]->ToString();

			   if (this->lbPhrases->Items->Count == _num_permutations)
				   return;

			   if (i < pItems->Count - 1)
				   PermuteNext(pItems[i + 1], i + 1, perm, _num_permutations, pItems);
			   else
				   this->lbPhrases->Items->Add(ExplodeArr(perm));
		   }
		}

		private: System::String^ ExplodeArr(array<System::String^>^ arr) {
			/*System::String^ res = gcnew String("");

			for (int i; i < arr->Length; i++) {
				res->Concat(res, "m", this->tbSeperator->Text);
			}

			return res->;*/
			return arr[0] + this->tbSeperator->Text + arr[1] + this->tbSeperator->Text + arr[2];
		}

		private: void ShowError(System::String^ text) {
			MessageBox::Show(text, L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	};
}
