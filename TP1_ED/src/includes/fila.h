#ifndef FILA_H
#define FILA_H

#include "lista.h"
#include "recipiente.h"

class Fila: Lista
{

private:
	void remove(ml);


public:

	Fila();
	virtual ~Fila();

	Recipiente * remove();
	void insere(ml, const int&);
	
};

#endif