//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BuyerAdd.h"
#include "Buyers.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBuyerAddForm *BuyerAddForm;
//---------------------------------------------------------------------------
__fastcall TBuyerAddForm::TBuyerAddForm(TComponent* Owner)
	: TForm(Owner)
{
    int numFav;

	DM->ADOTObjects->First();
	while(!DM->ADOTObjects->Eof)
	{
		numFav = DM->ADOTObjects->FieldByName("Object ID")->AsInteger;

        ComboBox1->Items->Add(numFav);

		DM->ADOTObjects->Next();
    }
}
//---------------------------------------------------------------------------
void __fastcall TBuyerAddForm::Button2Click(TObject *Sender)
{
	DM->ADOTBuyers->Active = false;
    DM->ADOTBuyers->Active = true;
	BuyerAddForm->Close();
	BuyersForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TBuyerAddForm::Button1Click(TObject *Sender)
{
	DM->ADOTBuyers->Last();
	int ID = DM->ADOTBuyers->FieldByName("Buyers ID")->AsInteger + 1;

    AnsiString Favorite = ComboBox1->Text;
	AnsiString NameAndSurname = Edit2->Text;
	AnsiString Phone = Edit3->Text;

	DM->ADOQ->SQL->Text = ("INSERT INTO Buyers([Buyers ID], [Name, surname], [Contact number], [Favorites]) VALUES(:ID, :NameAndSurname, :Phone, :Favorite)");
	DM->ADOQ->Parameters->ParamByName("ID")->Value = ID;
	DM->ADOQ->Parameters->ParamByName("NameAndSurname")->Value = NameAndSurname;
	DM->ADOQ->Parameters->ParamByName("Phone")->Value = Phone;
    DM->ADOQ->Parameters->ParamByName("Favorite")->Value = Favorite;

	DM->ADOQ->ExecSQL();

	ShowMessage("Новий користувач успішно додан.");
}
//---------------------------------------------------------------------------
