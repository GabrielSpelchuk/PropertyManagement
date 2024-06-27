//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SellerAdd.h"
#include "Sellers.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSellerAddForm *SellerAddForm;
//---------------------------------------------------------------------------
__fastcall TSellerAddForm::TSellerAddForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSellerAddForm::Button2Click(TObject *Sender)
{
	DM->ADOTSellers->Active = false;
	DM->ADOTSellers->Active = true;
	SellerAddForm->Close();
	SellersForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TSellerAddForm::Button1Click(TObject *Sender)
{
    DM->ADOTSellers->Last();
	int ID = DM->ADOTSellers->FieldByName("Seller ID")->AsInteger + 1;

    AnsiString Rating = Edit1->Text;
	AnsiString NameAndSurname = Edit2->Text;
	AnsiString Phone = Edit3->Text;

	DM->ADOQ->SQL->Text = ("INSERT INTO Sellers([Seller ID], [Name, surname], [Contact number], [Rating]) VALUES(:ID, :NameAndSurname, :Phone, :Rating)");
	DM->ADOQ->Parameters->ParamByName("ID")->Value = ID;
	DM->ADOQ->Parameters->ParamByName("NameAndSurname")->Value = NameAndSurname;
	DM->ADOQ->Parameters->ParamByName("Phone")->Value = Phone;
    DM->ADOQ->Parameters->ParamByName("Rating")->Value = Rating;

	DM->ADOQ->ExecSQL();

	ShowMessage("Новий користувач успішно додан.");
}
//---------------------------------------------------------------------------
