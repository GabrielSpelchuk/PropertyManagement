//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Registration.h"
#include "Main.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegistrationForm *RegistrationForm;
//---------------------------------------------------------------------------
__fastcall TRegistrationForm::TRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegistrationForm::Button1Click(TObject *Sender)
{
	AnsiString login1 = Edit1->Text;
	AnsiString password1 = Edit2->Text;
	AnsiString password2 = Edit3->Text;

	if(password1 == password2){
		DM->ADOQ->SQL->Text = ("INSERT INTO Registration([Login], [Password]) VALUES (:login, :password)");
		DM->ADOQ->Parameters->ParamByName("login")->Value = login1;
		DM->ADOQ->Parameters->ParamByName("password")->Value = password1;

		DM->ADOQ->ExecSQL();

		ShowMessage("Ви успішно зареєструвались.");

		RegistrationForm->Close();
		MainForm->Show();
	}

	else
        ShowMessage("Перевірте вказані паролі!!");
}
//---------------------------------------------------------------------------

