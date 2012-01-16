//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Sockets.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TTcpServer *TcpServer1;
	TTcpClient *TcpClient1;
	TEdit *edtServerIP;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *edtServerPort;
	TBitBtn *btnStartService;
	TBitBtn *btnStopService;
	TGroupBox *GroupBox2;
	void __fastcall btnStartServiceClick(TObject *Sender);
	void __fastcall TcpClient1Connect(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
