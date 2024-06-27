//---------------------------------------------------------------------------

#ifndef ObjectsH
#define ObjectsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TObjectsForm : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *DBNavigator1;
	TButton *Button1;
	TButton *Button2;
	TDBGrid *DBGrid1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TObjectsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TObjectsForm *ObjectsForm;
//---------------------------------------------------------------------------
#endif
