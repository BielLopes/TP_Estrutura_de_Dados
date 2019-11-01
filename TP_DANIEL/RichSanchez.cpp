#include "RichSanchez.h"

RichSanchez::RichSanchez()
{
	numfrascos = 0;
	//listas* Frascos = new listas;
}

RichSanchez::~RichSanchez()
{
	delete Frascos;
}

void RichSanchez::input(int frasco)
{
	if (frasco >= 0) {
		Frascos->inserir(frasco);
		numfrascos++;
	}
	else
		std::cout << "O volume do frasco deve ser positivo" << std::endl;
}

void RichSanchez::remove(int frasco)
{
	if (Frascos->buscaelemento(frasco)) {
		numfrascos--;
	}
	Frascos->remover(frasco);
}

int RichSanchez::calculamininteracoes(const int volume)
{
	listas operacoes;
	listas novaoperacoes;

	int aux;
	int j = 0;
	for (int i = 1; i <= numfrascos; i++) {
		novaoperacoes.inserir(operacoes.getelementopos(j) + (Frascos->getelementopos(i - 1)));
		aux = operacoes.getelementopos(j) - (Frascos->getelementopos(i - 1));
		if (aux > 0)
			novaoperacoes.inserir(aux);
	}
return calculainteracoes(volume, novaoperacoes, Frascos, 1);
}

void RichSanchez::imprimefrascos()
{
	Frascos->imprimelista();
}

int RichSanchez::calculainteracoes(const int volume, listas operacoes, listas * Frascos, int interacoes)
{
	/*if (operacoes.buscaelemento(volume))
		return interacoes;*/

	listas novaoperacoes;
	int j = 0;
	int aux1, aux2;

	while ((operacoes.getelementopos(j)) != (-1)) {
		for (int i = 1; i <= numfrascos; i++) {
			aux1 = operacoes.getelementopos(j) + Frascos->getelementopos(i - 1);
			if(aux1 == volume) return (interacoes + 1);
			novaoperacoes.inserir(aux1);
			aux2 = operacoes.getelementopos(j) - Frascos->getelementopos(i - 1);
			if(aux2 == volume) return (interacoes + 1);
			if (aux2 > 0)
				novaoperacoes.inserir(aux2);
		}
		j++;
	}
	interacoes++;
	calculainteracoes(volume, novaoperacoes, Frascos, interacoes);
}
