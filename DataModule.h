//---------------------------------------------------------------------------

#ifndef DataModuleH
#define DataModuleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDM : public TDataModule
{
__published:	// IDE-managed Components
	TADOTable *ADOTAdmins;
	TADOTable *ADOTRegistration;
	TADOTable *ADOTObjects;
	TADOTable *ADOTBuyers;
	TADOTable *ADOTSellers;
	TDataSource *DSAdmins;
	TDataSource *DSRegist;
	TDataSource *DSObjects;
	TDataSource *DSBuyers;
	TDataSource *DSSellers;
	TADOQuery *ADOQ;
	TADOConnection *ADOConnection;
private:	// User declarations
public:		// User declarations
	__fastcall TDM(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM *DM;
//---------------------------------------------------------------------------
#endif
