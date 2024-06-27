//---------------------------------------------------------------------------

#ifndef AdminsH
#define AdminsH
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
class TAdminsForm : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *DBNavigator1;
	TButton *Button1;
	TButton *Button2;
	TDBGrid *DBGrid1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdminsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminsForm *AdminsForm;
//---------------------------------------------------------------------------
#endif
