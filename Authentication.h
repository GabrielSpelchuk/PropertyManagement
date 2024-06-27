//---------------------------------------------------------------------------

#ifndef AuthenticationH
#define AuthenticationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TAuthenticationForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *Edit1;
	TEdit *Edit2;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAuthenticationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAuthenticationForm *AuthenticationForm;
//---------------------------------------------------------------------------
#endif
