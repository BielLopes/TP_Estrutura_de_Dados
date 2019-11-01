#ifndef LISTAS
#define LISTAS

#include <stdio.h>
#include <iostream>

typedef struct Celula_ctr* Ponteiro;

typedef struct Celula_ctr{
	int elemento;
	Ponteiro Proximo;
	Ponteiro Tras;
}Celula;

class listas								//lista duplamente encadeada com celula cabeça
{
public:
	//virtual ~listas();
// protected:
	listas();
	void inserir(int elemento);				//insere elemento no final da lista
	void remover();							//remove ultimo elemento da lista
	void removerall(int elemento);			//remove todos os determinados elementos da lista
	void remover(int elemento);
	bool buscaelemento(int elemento);		//busca determinado elemento e retorna TRUE quando encontrado
	void imprimelista();
	int getelementopos(int pos);
private:
	Ponteiro Primeiro;
	Ponteiro Ultimo;
};

#endif

