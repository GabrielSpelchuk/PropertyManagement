//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("RegistOrAuth.cpp", RegistOrAuthForm);
USEFORM("ObjectsSearch.cpp", ObjectsSearchForm);
USEFORM("Registration.cpp", RegistrationForm);
USEFORM("SellObject.cpp", SellObjectForm);
USEFORM("Sellers.cpp", SellersForm);
USEFORM("SellerAdd.cpp", SellerAddForm);
USEFORM("SelectLabel.cpp", SelectForm);
USEFORM("Objects.cpp", ObjectsForm);
USEFORM("Authentication.cpp", AuthenticationForm);
USEFORM("Admins.cpp", AdminsForm);
USEFORM("AdminAuthentication.cpp", AdminAuthenticationForm);
USEFORM("AdminAdd.cpp", AdminAddForm);
USEFORM("BuyerAdd.cpp", BuyerAddForm);
USEFORM("ObjectAdd.cpp", ObjectAddForm);
USEFORM("Main.cpp", MainForm);
USEFORM("DataModule.cpp", DM); /* TDataModule: File Type */
USEFORM("Buyers.cpp", BuyersForm);
USEFORM("About.cpp", AboutForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Iceberg Classico");
		Application->CreateForm(__classid(TRegistOrAuthForm), &RegistOrAuthForm);
		Application->CreateForm(__classid(TDM), &DM);
		Application->CreateForm(__classid(TAuthenticationForm), &AuthenticationForm);
		Application->CreateForm(__classid(TRegistrationForm), &RegistrationForm);
		Application->CreateForm(__classid(TMainForm), &MainForm);
		Application->CreateForm(__classid(TObjectsSearchForm), &ObjectsSearchForm);
		Application->CreateForm(__classid(TAdminAuthenticationForm), &AdminAuthenticationForm);
		Application->CreateForm(__classid(TSelectForm), &SelectForm);
		Application->CreateForm(__classid(TSellersForm), &SellersForm);
		Application->CreateForm(__classid(TBuyersForm), &BuyersForm);
		Application->CreateForm(__classid(TObjectsForm), &ObjectsForm);
		Application->CreateForm(__classid(TAdminsForm), &AdminsForm);
		Application->CreateForm(__classid(TSellerAddForm), &SellerAddForm);
		Application->CreateForm(__classid(TBuyerAddForm), &BuyerAddForm);
		Application->CreateForm(__classid(TObjectAddForm), &ObjectAddForm);
		Application->CreateForm(__classid(TAdminAddForm), &AdminAddForm);
		Application->CreateForm(__classid(TSellObjectForm), &SellObjectForm);
		Application->CreateForm(__classid(TAboutForm), &AboutForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
