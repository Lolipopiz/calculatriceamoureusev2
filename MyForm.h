#pragma once

namespace calculatriceamoureusev2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ calccompt;
	protected:

	protected:
	private: System::Windows::Forms::Label^ sonPrenom;
	private: System::Windows::Forms::Label^ tonPrenom;
	private: System::Windows::Forms::PictureBox^ coeur2;
	private: System::Windows::Forms::PictureBox^ coeur1;
	private: System::Windows::Forms::Label^ calcam;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::ProgressBar^ curseur_de_comptabilité;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::PictureBox^ image_personnage;





	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		int targetValue = 0;
		int CalculerScorePrenom(String^ prenom);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->calccompt = (gcnew System::Windows::Forms::Button());
			this->sonPrenom = (gcnew System::Windows::Forms::Label());
			this->tonPrenom = (gcnew System::Windows::Forms::Label());
			this->coeur2 = (gcnew System::Windows::Forms::PictureBox());
			this->coeur1 = (gcnew System::Windows::Forms::PictureBox());
			this->calcam = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->curseur_de_comptabilité = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->image_personnage = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coeur2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coeur1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image_personnage))->BeginInit();
			this->SuspendLayout();
			// 
			// calccompt
			// 
			this->calccompt->Font = (gcnew System::Drawing::Font(L"French Script MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calccompt->Location = System::Drawing::Point(340, 321);
			this->calccompt->Margin = System::Windows::Forms::Padding(4);
			this->calccompt->Name = L"calccompt";
			this->calccompt->Size = System::Drawing::Size(241, 55);
			this->calccompt->TabIndex = 11;
			this->calccompt->Text = L"Calculez votre niveau d\'amour";
			this->calccompt->UseVisualStyleBackColor = true;
			this->calccompt->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// sonPrenom
			// 
			this->sonPrenom->AutoSize = true;
			this->sonPrenom->Location = System::Drawing::Point(676, 194);
			this->sonPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->sonPrenom->Name = L"sonPrenom";
			this->sonPrenom->Size = System::Drawing::Size(118, 16);
			this->sonPrenom->TabIndex = 10;
			this->sonPrenom->Text = L"Entrez son prénom";
			// 
			// tonPrenom
			// 
			this->tonPrenom->AutoSize = true;
			this->tonPrenom->Location = System::Drawing::Point(121, 194);
			this->tonPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->tonPrenom->Name = L"tonPrenom";
			this->tonPrenom->Size = System::Drawing::Size(126, 16);
			this->tonPrenom->TabIndex = 9;
			this->tonPrenom->Text = L"Entrez votre prénom";
			// 
			// coeur2
			// 
			this->coeur2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"coeur2.Image")));
			this->coeur2->Location = System::Drawing::Point(670, 72);
			this->coeur2->Margin = System::Windows::Forms::Padding(4);
			this->coeur2->Name = L"coeur2";
			this->coeur2->Size = System::Drawing::Size(139, 62);
			this->coeur2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->coeur2->TabIndex = 8;
			this->coeur2->TabStop = false;
			// 
			// coeur1
			// 
			this->coeur1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"coeur1.Image")));
			this->coeur1->Location = System::Drawing::Point(124, 72);
			this->coeur1->Margin = System::Windows::Forms::Padding(4);
			this->coeur1->Name = L"coeur1";
			this->coeur1->Size = System::Drawing::Size(139, 62);
			this->coeur1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->coeur1->TabIndex = 7;
			this->coeur1->TabStop = false;
			// 
			// calcam
			// 
			this->calcam->AutoSize = true;
			this->calcam->Font = (gcnew System::Drawing::Font(L"French Script MT", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcam->Location = System::Drawing::Point(333, 26);
			this->calcam->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->calcam->Name = L"calcam";
			this->calcam->Size = System::Drawing::Size(257, 42);
			this->calcam->TabIndex = 6;
			this->calcam->Text = L"Calculatrice amoureuse";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(679, 229);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(136, 229);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 13;
			// 
			// curseur_de_comptabilité
			// 
			this->curseur_de_comptabilité->BackColor = System::Drawing::Color::Firebrick;
			this->curseur_de_comptabilité->Location = System::Drawing::Point(364, 270);
			this->curseur_de_comptabilité->Name = L"curseur_de_comptabilité";
			this->curseur_de_comptabilité->Size = System::Drawing::Size(194, 23);
			this->curseur_de_comptabilité->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->curseur_de_comptabilité->TabIndex = 15;
			this->curseur_de_comptabilité->Click += gcnew System::EventHandler(this, &MyForm::curseur_de_comptabilité_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(271, 277);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(349, 155);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(220, 96);
			this->richTextBox1->TabIndex = 17;
			this->richTextBox1->Text = L"";
			// 
			// image_personnage
			// 
			this->image_personnage->BackColor = System::Drawing::Color::White;
			this->image_personnage->Location = System::Drawing::Point(331, 427);
			this->image_personnage->Name = L"image_personnage";
			this->image_personnage->Size = System::Drawing::Size(259, 243);
			this->image_personnage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->image_personnage->TabIndex = 18;
			this->image_personnage->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(937, 697);
			this->Controls->Add(this->image_personnage);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->curseur_de_comptabilité);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->calccompt);
			this->Controls->Add(this->sonPrenom);
			this->Controls->Add(this->tonPrenom);
			this->Controls->Add(this->coeur2);
			this->Controls->Add(this->coeur1);
			this->Controls->Add(this->calcam);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"calculatrice_amour";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coeur2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coeur1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image_personnage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Récupérer les prénoms des zones de texte
		String^ prenom1 = textBox1->Text;
		String^ prenom2 = textBox2->Text;
		//Récupérer les scores
		int scorePrenom1 = CalculerScorePrenom(prenom1);
        int scorePrenom2= CalculerScorePrenom(prenom2);



		// Calcul de la compatibilité 
		targetValue = (scorePrenom1 + scorePrenom2) % 100;

		// remet à 0 la barre de progression et du texte d'affichage
		curseur_de_comptabilité->Value = 0;
		richTextBox1->Text = ""; // Effacer l'ancien message

		// Démarrage du timer
		timer1->Start();

	}
	private: System::Void curseur_de_comptabilité_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (curseur_de_comptabilité->Value < targetValue)
		{
			curseur_de_comptabilité->Value += 1;
			label1->Text = "Compatibilité : " + curseur_de_comptabilité->Value.ToString() + "%";
		}
		else
		{
			timer1->Stop(); // Arrêter l'animation quand la valeur cible est atteinte

			// Calculer l'intervalle basé sur targetValue
			int range = targetValue / 20;

			switch (range) {
			case 0: // entre 0 et 19%
				this->richTextBox1->Text = "Ce n'est pas la bonne personne pour toi désolée";
				PictureBox->ImageLocation = "violet.png";


				break;
			case 1: // entre 20% et 39%
				this->richTextBox1->Text = "Bon, c'est mieux que 0, mais ne t'attends à rien.";
				PictureBox->ImageLocation = "orange.png";

				break;
			case 2: // entre 40% et 59%
				this->richTextBox1->Text = "Bah, il y a une chance sur 2 que tu lui plais, c'est déjà bien!";
				PictureBox->ImageLocation = "vert.png";

				break;
			case 3: // entre 60% et 79%
				this->richTextBox1->Text = "Vous êtes presque parfaits ensemble!";
			PictureBox->ImageLocation = "rouge.png";

				break;
			case 4: // entre 80% et 99%
			case 5: // 100%
				this->richTextBox1->Text = "Vous êtes faits l'un pour l'autre!";
				PictureBox->ImageLocation = "rose.png";

				break;
			default:
				this->richTextBox1->Text = "Erreur dans le calcul.";
				break;
			}
		}
	}
	
	

};
}

