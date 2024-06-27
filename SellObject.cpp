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
	ComboBox1->Items->Add("Квартира");
	ComboBox1->Items->Add("Будинок");
	ComboBox1->Items->Add("Участок");

    int UserName;

	DM->ADOTSellers->First();
	while(!DM->ADOTSellers->Eof)
	{
		UserName = DM->ADOTSellers->FieldByName("Seller ID")->AsInteger;

		ComboBox2->Items->Add(UserName);

		DM->ADOTSellers->Next();
	}

	ComboBox3->Items->Add("Київська область");
	ComboBox3->Items->Add("Вінницька область");
	ComboBox3->Items->Add("Волинська область");
	ComboBox3->Items->Add("Дніпропетровська область");
	ComboBox3->Items->Add("Донецька область");
	ComboBox3->Items->Add("Житомирська область");
	ComboBox3->Items->Add("Закарпатська область");
	ComboBox3->Items->Add("Запорізька область");
	ComboBox3->Items->Add("Івано-Франківська область");
	ComboBox3->Items->Add("Кіровоградська область");
	ComboBox3->Items->Add("Луганська область");
	ComboBox3->Items->Add("Львівська область");
	ComboBox3->Items->Add("Миколаївська область");
	ComboBox3->Items->Add("Одеська область");
	ComboBox3->Items->Add("Полтавська область");
	ComboBox3->Items->Add("Рівненська область");
	ComboBox3->Items->Add("Сумська область");
	ComboBox3->Items->Add("Тернопільська область");
	ComboBox3->Items->Add("Харківська область");
	ComboBox3->Items->Add("Херсонська область");
	ComboBox3->Items->Add("Хмельницька область");
	ComboBox3->Items->Add("Черкаська область");
	ComboBox3->Items->Add("Чернігівська область");
	ComboBox3->Items->Add("Чернівецька область");
	ComboBox3->Items->Add("Автономна Республіка Крим");
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


	if (Edit2->Text == "Орендувати")
		RentSell = "Rent";

	if (Edit2->Text == "Продати")
		RentSell = "Sell";

	else
        RentSell = Edit2->Text;

    if (ComboBox1->Text == "Квартира")
		ObjectType = "Apartment";

	if (ComboBox1->Text == "Будинок")
		ObjectType = "House";

	if (ComboBox1->Text == "Участок")
		ObjectType = "Plot";

	if (ComboBox2->Text == "Орендувати")
		RentSell = "Rent";

	if (ComboBox2->Text == "Купити")
		RentSell = "Sell";

	if (ComboBox3->Text == "Київська область")
		ObjectRegion = "Kyiv region";

	if (ComboBox3->Text == "Вінницька область")
		ObjectRegion = "Vinnytsia region";

	if (ComboBox3->Text == "Волинська область")
		ObjectRegion = "Volyn region";

	if (ComboBox3->Text == "Дніпропетровська область")
		ObjectRegion = "Dnipropetrovsk region";

	if (ComboBox3->Text == "Донецька область")
		ObjectRegion = "Donetsk region";

	if (ComboBox3->Text == "Житомирська область")
		ObjectRegion = "Zhitomirskaya region";

	if (ComboBox3->Text == "Закарпатська область")
		ObjectRegion = "Zakarpattya region";

	if (ComboBox3->Text == "Запорізька область")
		ObjectRegion = "Zaporizhzhya region";

	if (ComboBox3->Text == "Івано-Франківська область")
		ObjectRegion = "Ivano-Frankivsk region";

	if (ComboBox3->Text == "Кіровоградська область")
		ObjectRegion = "Kirovogradskaya region";

	if (ComboBox3->Text == "Луганська область")
		ObjectRegion = "Luhansk region";

	if (ComboBox3->Text == "Львівська область")
		ObjectRegion = "Lviv region";

	if (ComboBox3->Text == "Миколаївська область")
		ObjectRegion = "Nikolaevskaya region";

	if (ComboBox3->Text == "Одеська область")
		ObjectRegion = "Odesa region";

	if (ComboBox3->Text == "Полтавська область")
		ObjectRegion = "Poltava region";

	if (ComboBox3->Text == "Рівненська область")
		ObjectRegion = "Rivne region";

	if (ComboBox3->Text == "Сумська область")
		ObjectRegion = "Sumy region";

	if (ComboBox3->Text == "Тернопільська область")
		ObjectRegion = "Ternopil region";

	if (ComboBox3->Text == "Харківська область")
		ObjectRegion = "Kharkiv region";

	if (ComboBox3->Text == "Херсонська область")
		ObjectRegion = "Kherson region";

	if (ComboBox3->Text == "Хмельницька область")
		ObjectRegion = "Khmelnytsky region";

	if (ComboBox3->Text == "Черкаська область")
		ObjectRegion = "Cherkassy region";

	if (ComboBox3->Text == "Чернігівська область")
		ObjectRegion = "Chernihiv region";

	if (ComboBox3->Text == "Чернівецька область")
		ObjectRegion = "Chernivtsi region";

	if (ComboBox3->Text == "Автономна Республіка Крим")
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

	ShowMessage("Новий об'єкт успішно додан.");
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
