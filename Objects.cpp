//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Objects.h"
#include "SelectLabel.h"
#include "ObjectAdd.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TObjectsForm *ObjectsForm;
//---------------------------------------------------------------------------
__fastcall TObjectsForm::TObjectsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TObjectsForm::Button2Click(TObject *Sender)
{
ObjectsForm->Hide();
ObjectAddForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TObjectsForm::Button1Click(TObject *Sender)
{
ObjectsForm->Close();
SelectForm->Show();
}
//---------------------------------------------------------------------------
