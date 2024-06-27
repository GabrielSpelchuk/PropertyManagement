//---------------------------------------------------------------------------

#ifndef AdminAddH
#define AdminAddH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TAdminAddForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Button1;
	TButton *Button2;
	TComboBox *ComboBox1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdminAddForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminAddForm *AdminAddForm;
//---------------------------------------------------------------------------
#endif
