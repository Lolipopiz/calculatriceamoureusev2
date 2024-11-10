#include "MyForm.h" 
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	calculatriceamoureusev2::MyForm form; // MonProjet est le nom de mon projet (à adapter) 
	Application::Run(% form);

}

int calculatriceamoureusev2::MyForm::CalculerScorePrenom(String^ prenom)
{
	if (prenom->Length == 0) return 0;
	int valeurPremiereLettre = Convert::ToInt32(prenom[0]);
	int valeurDerniereLettre = Convert::ToInt32(prenom[prenom->Length - 1]);
	int valeurMilieuLettre = 0;
	if (prenom->Length > 1)
		valeurMilieuLettre = Convert::ToInt32(prenom[1]);
	int score = valeurPremiereLettre + valeurDerniereLettre + valeurMilieuLettre;

	return score;
}
