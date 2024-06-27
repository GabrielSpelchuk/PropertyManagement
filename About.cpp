//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "About.h"
#include "ObjectsSearch.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAboutForm *AboutForm;
//---------------------------------------------------------------------------
__fastcall TAboutForm::TAboutForm(TComponent* Owner)
	: TForm(Owner)
{
    Memo1->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TAboutForm::ÍàçàäClick(TObject *Sender)
{
    AboutForm->CleanupInstance();
	AboutForm->Close();
    ObjectsSearchForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAboutForm::Button1Click(TObject *Sender)
{
	AnsiString ID = Edit1->Text;

	DM->ADOTObjects->First();
    DM->ADOTSellers->First();

	while(!DM->ADOTObjects->Eof)
	{
		if(DM->ADOTObjects->FieldByName("Object ID")->AsString == ID)
			break;

		DM->ADOTObjects->Next();
	}

	AnsiString OwnerID = DM->ADOTObjects->FieldByName("Owner")->AsString;

	while(!DM->ADOTSellers->Eof)
	{
		if(DM->ADOTSellers->FieldByName("Seller ID")->AsString == OwnerID)
			break;

        DM->ADOTSellers->Next();
    }


	Edit2->Text = DM->ADOTObjects->FieldByName("Type")->AsString;
	Edit3->Text = DM->ADOTSellers->FieldByName("Name, surname")->AsString;
	Edit4->Text = DM->ADOTObjects->FieldByName("Verification status")->AsString;
	Edit5->Text = DM->ADOTObjects->FieldByName("Rent/Sell")->AsString;
	Edit6->Text = DM->ADOTObjects->FieldByName("Region")->AsString;
	Edit7->Text = DM->ADOTObjects->FieldByName("City")->AsString;
	Edit8->Text = DM->ADOTObjects->FieldByName("Address")->AsString;
	Edit9->Text = DM->ADOTObjects->FieldByName("Area")->AsString;
	Edit10->Text = DM->ADOTObjects->FieldByName("Number of rooms")->AsString;
	Edit11->Text = DM->ADOTObjects->FieldByName("Floor")->AsString;
	Edit12->Text = DM->ADOTObjects->FieldByName("Price")->AsString;
	Edit13->Text = DM->ADOTSellers->FieldByName("Rating")->AsString;
	Edit14->Text = DM->ADOTSellers->FieldByName("Contact number")->AsString;
	Memo1->Text = DM->ADOTObjects->FieldByName("Description")->AsString;
}
//---------------------------------------------------------------------------
