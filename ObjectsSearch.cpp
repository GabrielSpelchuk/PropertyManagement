//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ObjectsSearch.h"
#include "Main.h"
#include "DataModule.h"
#include "About.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TObjectsSearchForm *ObjectsSearchForm;
//---------------------------------------------------------------------------
__fastcall TObjectsSearchForm::TObjectsSearchForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TObjectsSearchForm::Button1Click(TObject *Sender)
{
	ObjectsSearchForm->Close();
	MainForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TObjectsSearchForm::Button2Click(TObject *Sender)
{
	ObjectsSearchForm->Hide();
    AboutForm->Show();
}
//---------------------------------------------------------------------------

