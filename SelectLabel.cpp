//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SelectLabel.h"
#include "RegistOrAuth.h"
#include "Sellers.h"
#include "Buyers.h"
#include "Admins.h"
#include "Objects.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSelectForm *SelectForm;
//---------------------------------------------------------------------------
__fastcall TSelectForm::TSelectForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSelectForm::Button1Click(TObject *Sender)
{
SelectForm->Hide();
SellersForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TSelectForm::Button2Click(TObject *Sender)
{
SelectForm->Hide();
BuyersForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TSelectForm::Button3Click(TObject *Sender)
{
SelectForm->Hide();
AdminsForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TSelectForm::Button4Click(TObject *Sender)
{
SelectForm->Hide();
ObjectsForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TSelectForm::Button5Click(TObject *Sender)
{
    RegistOrAuthForm->Close();
}
//---------------------------------------------------------------------------

