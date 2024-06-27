//---------------------------------------------------------------------------

#ifndef BuyerAddH
#define BuyerAddH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TBuyerAddForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit2;
	TEdit *Edit3;
	TButton *Button1;
	TButton *Button2;
	TComboBox *ComboBox1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TBuyerAddForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBuyerAddForm *BuyerAddForm;
//---------------------------------------------------------------------------
#endif
