//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>

//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TStaticText *StaticText1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};

//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;

class Personagens{
public:
void Personagens::EntraDados(int ataque, int defesa, int agilid, int resis, int peso, int vida, int classe);
void Personagens::Leitura();
private:
	int idade;
	float altura;
	float attack;
	float defense;
	float life;
	float agilidade;
	float resistencia_magia;
	int magia;
	float peso;
	int inteligencia;
	int Classe;
};

//---------------------------------------------------------------------------
#endif
