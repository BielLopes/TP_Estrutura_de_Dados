#include "listas.h"

listas::listas()
	{
		Primeiro = new Celula;
		Primeiro->Proximo= NULL;
		Ultimo = Primeiro;
		Primeiro->Tras = NULL;
	}

void listas::inserir(int elemento)
{
	Ponteiro aux = new Celula;
	aux->elemento = elemento;

	aux->Proximo = NULL;
	Ultimo->Proximo = aux;
	aux->Tras = Ultimo;
	Ultimo = aux;
	
}

void listas::remover()
{
	if (Primeiro == Ultimo) {
		std::cout << "Lista Vazia" << std::endl;
		return;
	}
	Ponteiro aux = Ultimo->Tras;
	Ponteiro limpa = Ultimo;
	aux->Proximo = NULL;
	Ultimo = aux;
	delete limpa;
}

void listas::remover(int elemento)
{
	if (Primeiro == Ultimo) {
		return;
	}

	bool end = false;

	Ponteiro Percorre = Primeiro->Proximo;

	while ((Percorre != NULL) && (end == false)) {
		if (Percorre->elemento == elemento) {
			if (Percorre->Proximo == NULL) {
				Percorre->Tras->Proximo = NULL;
			}
			else {
				Percorre->Tras->Proximo = Percorre->Proximo;
				Percorre->Proximo->Tras = Percorre->Tras;
			}
			end = true;
		}
		Percorre = Percorre->Proximo;
	}
}

void listas::removerall(int elemento)
{
	if (Primeiro == Ultimo) {
		return;
	}

	Ponteiro Percorre = Primeiro->Proximo;
	Ponteiro limpa = Percorre;

	while (Percorre != NULL) {
		if (Percorre->elemento == elemento) {
			if (Percorre->Proximo == NULL) {
				Percorre->Tras->Proximo = NULL;
			}
			else {
				Percorre->Tras->Proximo = Percorre->Proximo;
				Percorre->Proximo->Tras = Percorre->Tras;
			}
		}
		Percorre = Percorre->Proximo;
	}
}

bool listas::buscaelemento(int elemento)
{
	if (Primeiro == Ultimo) {
		return false;
	}

	Ponteiro Percorre = Primeiro->Proximo;

	while (Percorre != NULL) {
		if (Percorre->elemento == elemento)
			return true;
		Percorre = Percorre->Proximo;
	}

	return false;
}

void listas::imprimelista()
{
	if (Primeiro == Ultimo) {
		return;
	}

	Ponteiro Percorre = Primeiro->Proximo;
	int pos = 0;

	while (Percorre != NULL) {
		std::cout << "Elemento " << pos << " = " << Percorre->elemento << std::endl;
		Percorre = Percorre->Proximo;
		pos++;
	}
}

int listas::getelementopos(int pos)
{
	if (Primeiro == Ultimo) {
		return 0;
	}

	Ponteiro Percorre = Primeiro;

	for (int i = 0; i <= pos; i++)
		if (Percorre->Proximo != NULL) {
			Percorre = Percorre->Proximo;
		}
		else
			return -1;

	return Percorre->elemento;
}

/*
listas::~listas()
{
	Ponteiro Percorre = Ultimo;
	Ponteiro aux;

	while (Percorre->Tras != Primeiro) {
		Percorre = Percorre->Tras;
		aux = Percorre->Proximo;
		delete aux;
	}

	delete Primeiro;
}
*/
