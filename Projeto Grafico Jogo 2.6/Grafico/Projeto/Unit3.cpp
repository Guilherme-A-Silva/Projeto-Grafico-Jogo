//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
extern Personagens P1;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
	int CLASSE = 0;
	Image1->Hide();
	Image2->Hide();
	Image3->Hide();
	Image4->Hide();
	Image5->Hide();

	P1.Leitura();
	if(CLASSE == 1){
		Image1->Show();
	}
	else if(CLASSE == 2){
		Image2->Show();
	}
	else if(CLASSE == 3){
		Image3->Show();
	}
	else if(CLASSE == 4){
		Image4->Show();
	}
	else if(CLASSE == 5){
		Image5->Show();
	}
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
