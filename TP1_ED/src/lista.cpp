#include "includes/lista.h"

Lista::Lista(){
	
	//printf("aloha\n");
	Recipiente * rec = new Recipiente(0, 0);
	rec->set_prox(nullptr);
	this->primeiro = rec;
	this->ultimo = this->primeiro;
}

Lista::~Lista(){

	Recipiente * percorre = this->primeiro;
	Recipiente * auxiliar;

	while(percorre != nullptr){
		
		auxiliar = percorre;
		percorre = percorre->get_prox();
		delete(auxiliar);
		
	}
}
	
void Lista::set_primeiro(Recipiente * const primeiro){
	this->primeiro = primeiro;
}

Recipiente * Lista::get_primeiro() const{
	return this->primeiro;
}

void Lista::set_ultimo(Recipiente * const ultimo){
	this->ultimo = ultimo;
}

Recipiente * Lista::get_ultimo() const{
	return this->ultimo;
}

void Lista::insere(ml x, const int& d){

	Recipiente * rec = new Recipiente(0, 0);
	this->primeiro->set_registro(x);
	this->primeiro->set_deep(d);

	rec->set_prox(this->primeiro);
	this->primeiro = rec;

}

void Lista::remove(ml x){

	Recipiente * percorre = this->primeiro->get_prox();
	Recipiente * anterior = this->primeiro;

	while(percorre != nullptr){
		
		if(x == percorre->get_registro()->get_capacidade()){

			if(percorre == this->ultimo){
				
				delete(percorre);
				anterior->set_prox(nullptr);
				this->ultimo = anterior;

			}else{

				anterior->set_prox(percorre->get_prox());
				delete(percorre);

			}

			break;

		}

		anterior = percorre;
		percorre = percorre->get_prox();
	}
}

