#include "includes/registro.h"

Registro::Registro(const ml &x){
	//printf("%d aqui no construtor de registro\n", x);
	this->capacidade = x;
}

ml Registro::get_capacidade() const{
	return this->capacidade;
}

Registro::~Registro(){
	//printf("Aloha sem dó\n");
}
