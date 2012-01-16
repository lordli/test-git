//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnStartServiceClick(TObject *Sender)
{
	this->TcpClient1->RemoteHost = this->edtServerIP->Text;
	this->TcpClient1->RemotePort = this->edtServerPort->Text;

	try
	{
		this->TcpClient1->Active = true;
	}
	catch(Exception &e)
	{
		// got exception
		ShowMessage("Connect error: " + e.Message);
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TcpClient1Connect(TObject *Sender)
{
	ShowMessage("Connected!");
}
//---------------------------------------------------------------------------

