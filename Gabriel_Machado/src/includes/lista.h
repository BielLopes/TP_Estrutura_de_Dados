#ifndef LISTA_H
#define LISTA_H

#include "recipiente.h"

//Essa classe represanta a nossa TAD que vai manipular o fluxo de dadso
class Lista
{

protected:
	Recipiente * primeiro;
	Recipiente * ultimo;

public:
	Lista();
	virtual ~Lista();
	
	void set_primeiro(Recipiente * const );
	Recipiente * get_primeiro() const;

	void set_ultimo(Recipiente * const);
	Recipiente * get_ultimo() const;

	/*
	* Agora vamos para as operações da TAD
	*/

	void insere(ml, const int&);
	void remove(ml);

	//Para a aplicação em questão serão necessárias apenas essas duas funções definidas a cima


	
};

#endif
