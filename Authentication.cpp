//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Authentication.h"
#include "Main.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAuthenticationForm *AuthenticationForm;
//---------------------------------------------------------------------------
__fastcall TAuthenticationForm::TAuthenticationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAuthenticationForm::Button1Click(TObject *Sender)
{
	AnsiString login1 = Edit1->Text;
	AnsiString password1 = Edit2->Text;

	DM->ADOTRegistration->First();
	while(!DM->ADOTRegistration->Eof){

		if(login1 == DM->ADOTRegistration->FieldByName("Login")->AsString &&
		password1 != DM->ADOTRegistration->FieldByName("Password")->AsString)
		{
			ShowMessage("Перевірте правильність написання логіну або паролю.");
		}

		if(login1 == DM->ADOTRegistration->FieldByName("Login")->AsString &&
		password1 == DM->ADOTRegistration->FieldByName("Password")->AsString)
		{
			ShowMessage("Ви успішно увійшли.");
			AuthenticationForm->Close();
			MainForm->Show();
		}

        DM->ADOTRegistration->Next();
	}
}
//---------------------------------------------------------------------------

