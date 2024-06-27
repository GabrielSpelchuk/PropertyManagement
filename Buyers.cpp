//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Buyers.h"
#include "SelectLabel.h"
#include "BuyerAdd.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBuyersForm *BuyersForm;
//---------------------------------------------------------------------------
__fastcall TBuyersForm::TBuyersForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBuyersForm::Button1Click(TObject *Sender)
{
BuyersForm->Close();
SelectForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TBuyersForm::Button2Click(TObject *Sender)
{
BuyersForm->Hide();
BuyerAddForm->Show();
}
//---------------------------------------------------------------------------
