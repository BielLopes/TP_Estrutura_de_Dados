#ifndef RECIPIENTE_H
#define RECIPIENTE_H

#include "registro.h"

//A célula que compoe a lista de recipientes é essa
class Recipiente
{

private:
	int deep;
	Registro * reg;
	Recipiente * prox;

public:
	Recipiente(const ml&,  const int& deep);

	Registro * get_registro() const;
	void set_registro(const ml& x);
	Recipiente * get_prox() const;
	void set_prox(Recipiente * const);

	int get_deep();
	void set_deep(const int );
	
};


#endif
