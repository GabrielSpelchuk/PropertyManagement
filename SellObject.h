//---------------------------------------------------------------------------

#ifndef SellObjectH
#define SellObjectH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TSellObjectForm : public TForm
{
__published:	// IDE-managed Components
	TComboBox *ComboBox1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TButton *Button1;
	TButton *Button2;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TMemo *Memo1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSellObjectForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSellObjectForm *SellObjectForm;
//---------------------------------------------------------------------------
#endif
