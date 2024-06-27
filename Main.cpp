//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "DataModule.h"
#include "ObjectsSearch.h"
#include "SellObject.h"
#include "RegistOrAuth.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
	ComboBox1->Items->Add("��������");
	ComboBox1->Items->Add("�������");
	ComboBox1->Items->Add("�������");
	ComboBox1->ItemIndex = 0;

	ComboBox2->Items->Add("����������");
	ComboBox2->Items->Add("������");
	ComboBox2->ItemIndex = 0;

	ComboBox3->Items->Add("������� �������");
	ComboBox3->Items->Add("³������� �������");
	ComboBox3->Items->Add("��������� �������");
	ComboBox3->Items->Add("��������������� �������");
	ComboBox3->Items->Add("�������� �������");
	ComboBox3->Items->Add("����������� �������");
	ComboBox3->Items->Add("������������ �������");
	ComboBox3->Items->Add("��������� �������");
	ComboBox3->Items->Add("�����-���������� �������");
	ComboBox3->Items->Add("ʳ������������ �������");
	ComboBox3->Items->Add("��������� �������");
	ComboBox3->Items->Add("�������� �������");
	ComboBox3->Items->Add("����������� �������");
	ComboBox3->Items->Add("������� �������");
	ComboBox3->Items->Add("���������� �������");
	ComboBox3->Items->Add("г�������� �������");
	ComboBox3->Items->Add("������� �������");
	ComboBox3->Items->Add("������������ �������");
	ComboBox3->Items->Add("��������� �������");
	ComboBox3->Items->Add("���������� �������");
	ComboBox3->Items->Add("����������� �������");
	ComboBox3->Items->Add("��������� �������");
	ComboBox3->Items->Add("���������� �������");
	ComboBox3->Items->Add("���������� �������");
	ComboBox3->Items->Add("��������� ��������� ����");
	ComboBox3->ItemIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Button1Click(TObject *Sender)
{
	AnsiString ObjectType;
	AnsiString RentSell;
    AnsiString ObjectRegion;

	DM->ADOTObjects->Filter = "";
    DM->ADOTObjects->Refresh();

	if (ComboBox1->Text == "��������")
		ObjectType = "Apartment";

	if (ComboBox1->Text == "�������")
		ObjectType = "House";

	if (ComboBox1->Text == "�������")
        ObjectType = "Plot";

	if (ComboBox2->Text == "����������")
		RentSell = "Rent";

	if (ComboBox2->Text == "������")
		RentSell = "Sell";

	if (ComboBox3->Text == "������� �������")
		ObjectRegion = "Kyiv region";

	if (ComboBox3->Text == "³������� �������")
		ObjectRegion = "Vinnytsia region";

	if (ComboBox3->Text == "��������� �������")
		ObjectRegion = "Volyn region";

	if (ComboBox3->Text == "��������������� �������")
		ObjectRegion = "Dnipropetrovsk region";

	if (ComboBox3->Text == "�������� �������")
		ObjectRegion = "Donetsk region";

	if (ComboBox3->Text == "����������� �������")
		ObjectRegion = "Zhitomirskaya region";

	if (ComboBox3->Text == "������������ �������")
		ObjectRegion = "Zakarpattya region";

	if (ComboBox3->Text == "��������� �������")
		ObjectRegion = "Zaporizhzhya region";

	if (ComboBox3->Text == "�����-���������� �������")
		ObjectRegion = "Ivano-Frankivsk region";

	if (ComboBox3->Text == "ʳ������������ �������")
		ObjectRegion = "Kirovogradskaya region";

	if (ComboBox3->Text == "��������� �������")
		ObjectRegion = "Luhansk region";

	if (ComboBox3->Text == "�������� �������")
		ObjectRegion = "Lviv region";

	if (ComboBox3->Text == "����������� �������")
		ObjectRegion = "Nikolaevskaya region";

	if (ComboBox3->Text == "������� �������")
		ObjectRegion = "Odesa region";

	if (ComboBox3->Text == "���������� �������")
		ObjectRegion = "Poltava region";

	if (ComboBox3->Text == "г�������� �������")
		ObjectRegion = "Rivne region";

	if (ComboBox3->Text == "������� �������")
		ObjectRegion = "Sumy region";

	if (ComboBox3->Text == "������������ �������")
		ObjectRegion = "Ternopil region";

	if (ComboBox3->Text == "��������� �������")
		ObjectRegion = "Kharkiv region";

	if (ComboBox3->Text == "���������� �������")
		ObjectRegion = "Kherson region";

	if (ComboBox3->Text == "����������� �������")
		ObjectRegion = "Khmelnytsky region";

	if (ComboBox3->Text == "��������� �������")
		ObjectRegion = "Cherkassy region";

	if (ComboBox3->Text == "���������� �������")
		ObjectRegion = "Chernihiv region";

	if (ComboBox3->Text == "���������� �������")
		ObjectRegion = "Chernivtsi region";

	if (ComboBox3->Text == "��������� ��������� ����")
		ObjectRegion = "Autonomous Republic of Crimea";


	DM->ADOTObjects->Filter = "Type = '" + ObjectType + "' AND Rent/Sell = '" + RentSell +"' AND Region = '" + ObjectRegion +"'";
	DM->ADOTObjects->Refresh();

	MainForm->Hide();
    ObjectsSearchForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::Button2Click(TObject *Sender)
{
	MainForm->Hide();
    SellObjectForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::Button3Click(TObject *Sender)
{
    RegistOrAuthForm->Close();
}
//---------------------------------------------------------------------------

