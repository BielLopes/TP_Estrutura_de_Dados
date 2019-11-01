#include "listas.h"
#include <stdio.h>

#ifndef RICHSANCHEZ
#define RICHSANCHEZ

class RichSanchez : public listas
{
public:
	RichSanchez();
	virtual ~RichSanchez();
	void input(int frasco);
	void remove(int frasco);
	int calculamininteracoes(const int volume);
	void imprimefrascos();
private:
	int calculainteracoes(const int volume, listas operacoes, listas* Frascos, int interacoes);
	listas *Frascos = new listas;
	int numfrascos;
};

#endif