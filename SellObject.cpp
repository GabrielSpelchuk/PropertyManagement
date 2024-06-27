//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SellObject.h"
#include "Main.h"
#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSellObjectForm *SellObjectForm;
//---------------------------------------------------------------------------
__fastcall TSellObjectForm::TSellObjectForm(TComponent* Owner)
	: TForm(Owner)
{
    Memo1->Text = "";
	ComboBox1->Items->Add("��������");
	ComboBox1->Items->Add("�������");
	ComboBox1->Items->Add("�������");

    int UserName;

	DM->ADOTSellers->First();
	while(!DM->ADOTSellers->Eof)
	{
		UserName = DM->ADOTSellers->FieldByName("Seller ID")->AsInteger;

		ComboBox2->Items->Add(UserName);

		DM->ADOTSellers->Next();
	}

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
}
//---------------------------------------------------------------------------
void __fastcall TSellObjectForm::Button2Click(TObject *Sender)
{
    DM->ADOTObjects->Last();
	int ID = DM->ADOTObjects->FieldByName("Object ID")->AsInteger + 1;

	AnsiString ObjectType;
	AnsiString Owner = ComboBox2->Text;
	AnsiString Verif = Edit1->Text;
	AnsiString RentSell;
	AnsiString City = Edit3->Text;
	AnsiString ObjectRegion;
	AnsiString Address = Edit4->Text;
	AnsiString Area = Edit5->Text;
	AnsiString Rooms = Edit6->Text;
	AnsiString Floor = Edit7->Text;
	AnsiString Price = Edit8->Text;
    AnsiString Description = Memo1->Text;


	if (Edit2->Text == "����������")
		RentSell = "Rent";

	if (Edit2->Text == "�������")
		RentSell = "Sell";

	else
        RentSell = Edit2->Text;

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

	DM->ADOQ->SQL->Text = ("INSERT INTO Objects([Object ID], [Type], [Owner], [Verification status], [Rent/Sell], [Region], [City], [Address], [Area], [Number of rooms], [Floor], [Price], [Description]) VALUES(:ID, :ObjectType, :Owner, :Verif, :RentSell, :ObjectRegion, :City, :Address,:Area, :Rooms, :Floor, :Price, :Description)");
	DM->ADOQ->Parameters->ParamByName("ID")->Value = ID;
	DM->ADOQ->Parameters->ParamByName("ObjectType")->Value = ObjectType;
	DM->ADOQ->Parameters->ParamByName("Owner")->Value = Owner;
	DM->ADOQ->Parameters->ParamByName("Verif")->Value = Verif;
	DM->ADOQ->Parameters->ParamByName("RentSell")->Value = RentSell;
	DM->ADOQ->Parameters->ParamByName("City")->Value = City;
	DM->ADOQ->Parameters->ParamByName("ObjectRegion")->Value = ObjectRegion;
	DM->ADOQ->Parameters->ParamByName("Address")->Value = Address;
	DM->ADOQ->Parameters->ParamByName("Area")->Value = Area;
	DM->ADOQ->Parameters->ParamByName("Rooms")->Value = Rooms;
	DM->ADOQ->Parameters->ParamByName("Floor")->Value = Floor;
    DM->ADOQ->Parameters->ParamByName("Price")->Value = Price;
	DM->ADOQ->Parameters->ParamByName("Description")->Value = Description;

    DM->ADOQ->ExecSQL();

	ShowMessage("����� ��'��� ������ �����.");
}
//---------------------------------------------------------------------------
void __fastcall TSellObjectForm::Button1Click(TObject *Sender)
{
	DM->ADOTObjects->Active = false;
	DM->ADOTObjects->Active = true;
	SellObjectForm->Close();
    MainForm->Show();
}
//---------------------------------------------------------------------------
