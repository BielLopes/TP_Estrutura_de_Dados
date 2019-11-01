#include "includes/fila.h"
#include "includes/recipiente.h"

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

Fila::Fila(){
	//printf("%d\n",this->primeiro->get_registro()->get_capacidade());
}

Fila::~Fila(){

}


Recipiente * Fila::remove(){

	if (this->primeiro == this->ultimo) return new Recipiente(0, 0);	

	
	Recipiente * percorre = this->primeiro;
	while(percorre->get_prox() != this->ultimo){
		percorre = percorre->get_prox();
	}

	Recipiente * retorno = new Recipiente(this->ultimo->get_registro()->get_capacidade(), this->ultimo->get_deep());

	delete(this->ultimo);

	percorre->set_prox(nullptr);
	this->ultimo = percorre;

	return retorno;
}

void Fila::insere(ml x,const int& d){
	Lista::insere(x, d);	
}
