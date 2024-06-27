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
	ComboBox1->Items->Add("Квартира");
	ComboBox1->Items->Add("Будинок");
	ComboBox1->Items->Add("Участок");
	ComboBox1->ItemIndex = 0;

	ComboBox2->Items->Add("Орендувати");
	ComboBox2->Items->Add("Купити");
	ComboBox2->ItemIndex = 0;

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

