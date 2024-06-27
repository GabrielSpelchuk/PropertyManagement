//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Sellers.h"
#include "SelectLabel.h"
#include "SellerAdd.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSellersForm *SellersForm;
//---------------------------------------------------------------------------
__fastcall TSellersForm::TSellersForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSellersForm::Button2Click(TObject *Sender)
{
SellersForm->Hide();
SellerAddForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TSellersForm::Button1Click(TObject *Sender)
{
SellersForm->Hide();
SelectForm->Show();
}
//---------------------------------------------------------------------------
