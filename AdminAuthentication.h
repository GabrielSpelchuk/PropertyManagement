//---------------------------------------------------------------------------

#ifndef AdminAuthenticationH
#define AdminAuthenticationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TAdminAuthenticationForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Button2;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdminAuthenticationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminAuthenticationForm *AdminAuthenticationForm;
//---------------------------------------------------------------------------
#endif
