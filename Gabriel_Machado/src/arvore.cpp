#include "includes/arvore.h"
#include "includes/fila.h"
#include "includes/recipiente.h"

Fila * Arvore::fila = new Fila();
Lista * Arvore::referencia = new Lista();

int Arvore::inica_busca(ml size){
	delete(Arvore::fila);
	Arvore::fila = new Fila();

	return Arvore::busca(size);
}

int Arvore::busca(const ml size){

	
	Recipiente * atual = Arvore::fila->remove();

	const int deep = atual->get_deep() + 1;

	Recipiente * percorre = Arvore::referencia->get_primeiro()->get_prox();
	
	while(percorre != nullptr){

		int number = atual->get_registro()->get_capacidade() + percorre->get_registro()->get_capacidade();

		if(number == size) return deep;

		Arvore::fila->insere(number, deep);

		percorre = percorre->get_prox();
	}

	percorre = Arvore::referencia->get_primeiro()->get_prox();
	
	while(percorre != nullptr){

		int number = atual->get_registro()->get_capacidade() - percorre->get_registro()->get_capacidade();
		
		if(number == size) return deep;

		if(number > 0) Arvore::fila->insere(number, deep);
		
		percorre = percorre->get_prox();

	}

	delete(atual);

	return Arvore::busca(size);


}
