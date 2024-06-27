//---------------------------------------------------------------------------

#ifndef ObjectsSearchH
#define ObjectsSearchH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TObjectsSearchForm : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TButton *Button1;
	TButton *Button2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TObjectsSearchForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TObjectsSearchForm *ObjectsSearchForm;
//---------------------------------------------------------------------------
#endif
