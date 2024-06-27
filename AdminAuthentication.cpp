//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdminAuthentication.h"
#include "RegistOrAuth.h"
#include "SelectLabel.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAdminAuthenticationForm *AdminAuthenticationForm;
//---------------------------------------------------------------------------
__fastcall TAdminAuthenticationForm::TAdminAuthenticationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAdminAuthenticationForm::Button2Click(TObject *Sender)
{
	AdminAuthenticationForm->Close();
    RegistOrAuthForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAdminAuthenticationForm::Button1Click(TObject *Sender)
{
	AnsiString login1 = Edit1->Text;
	AnsiString password1 = Edit2->Text;
    int count = 0;

	DM->ADOTRegistration->First();
	while(!DM->ADOTRegistration->Eof){

		if(login1 == DM->ADOTRegistration->FieldByName("Login")->AsString &&
		password1 != DM->ADOTRegistration->FieldByName("Password")->AsString)
		{
			ShowMessage("�������� ����������� ��������� ����� ��� ������.");
		}

		if(login1 == DM->ADOTRegistration->FieldByName("Login")->AsString &&
		password1 == DM->ADOTRegistration->FieldByName("Password")->AsString)
		{
            DM->ADOTAdmins->First();

			while(!DM->ADOTAdmins->Eof)
			{
				if(DM->ADOTAdmins->FieldByName("User name")->AsString == login1)
				{
					count++;
				}

                DM->ADOTAdmins->Next();
			}

            if(count == 1)
				{
                    ShowMessage("�� ������ ������ �� �����������");
					AdminAuthenticationForm->Close();
					SelectForm->Show();
				}

            else
                ShowMessage("� ��� ���� ���� ������������.");
		}

		DM->ADOTRegistration->Next();
	}
}
//---------------------------------------------------------------------------
