//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdminAdd.h"
#include "Admins.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAdminAddForm *AdminAddForm;
//---------------------------------------------------------------------------
__fastcall TAdminAddForm::TAdminAddForm(TComponent* Owner)
	: TForm(Owner)
{
	AnsiString UserName;

	DM->ADOTRegistration->First();
	while(!DM->ADOTRegistration->Eof)
	{
		UserName = DM->ADOTRegistration->FieldByName("Login")->AsString;

		ComboBox1->Items->Add(UserName);

		DM->ADOTRegistration->Next();
	}
}
//---------------------------------------------------------------------------
void __fastcall TAdminAddForm::Button2Click(TObject *Sender)
{
	DM->ADOTAdmins->Active = false;
    DM->ADOTAdmins->Active = true;
	AdminAddForm->Close();
	AdminsForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TAdminAddForm::Button1Click(TObject *Sender)
{
	DM->ADOTAdmins->Last();
	int ID = DM->ADOTAdmins->FieldByName("Administrator ID")->AsInteger + 1;

    AnsiString UserName = ComboBox1->Text;
	AnsiString NameAndSurname = Edit1->Text;
	AnsiString Phone = Edit2->Text;

	DM->ADOQ->SQL->Text = ("INSERT INTO Administrators([Administrator ID], [Name, surname], [Contact number], [User Name]) VALUES(:ID, :NameAndSurname, :Phone, :UserName)");
	DM->ADOQ->Parameters->ParamByName("ID")->Value = ID;
	DM->ADOQ->Parameters->ParamByName("NameAndSurname")->Value = NameAndSurname;
	DM->ADOQ->Parameters->ParamByName("Phone")->Value = Phone;
	DM->ADOQ->Parameters->ParamByName("UserName")->Value = UserName;

	DM->ADOQ->ExecSQL();

	ShowMessage("Новий адміністратор успішно додан.");
}
//---------------------------------------------------------------------------

