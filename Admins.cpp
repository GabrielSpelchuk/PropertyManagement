//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Admins.h"
#include "SelectLabel.h"
#include "AdminAdd.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAdminsForm *AdminsForm;
//---------------------------------------------------------------------------
__fastcall TAdminsForm::TAdminsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAdminsForm::Button1Click(TObject *Sender)
{
AdminsForm->Close();
SelectForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAdminsForm::Button2Click(TObject *Sender)
{
AdminsForm->Hide();
AdminAddForm->Show();
}
//---------------------------------------------------------------------------
