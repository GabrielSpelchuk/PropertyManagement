//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RegistOrAuth.h"
#include "Registration.h"
#include "Authentication.h"
#include "AdminAuthentication.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegistOrAuthForm *RegistOrAuthForm;
//---------------------------------------------------------------------------
__fastcall TRegistOrAuthForm::TRegistOrAuthForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TRegistOrAuthForm::Button1Click(TObject *Sender)
{
	RegistOrAuthForm->Hide();
	AuthenticationForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TRegistOrAuthForm::Button2Click(TObject *Sender)
{
	RegistOrAuthForm->Hide();
	RegistrationForm->Show();
}
//---------------------------------------------------------------------------



void __fastcall TRegistOrAuthForm::Button3Click(TObject *Sender)
{
    RegistOrAuthForm->Hide();
	AdminAuthenticationForm->Show();
}
//---------------------------------------------------------------------------

