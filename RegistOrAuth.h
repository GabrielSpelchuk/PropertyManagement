//---------------------------------------------------------------------------

#ifndef RegistOrAuthH
#define RegistOrAuthH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Bluetooth.Components.hpp>
#include <System.Bluetooth.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Menus.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TRegistOrAuthForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRegistOrAuthForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistOrAuthForm *RegistOrAuthForm;
//---------------------------------------------------------------------------
#endif
