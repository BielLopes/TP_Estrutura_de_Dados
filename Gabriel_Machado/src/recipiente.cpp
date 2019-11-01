#include "includes/recipiente.h"

Recipiente::Recipiente(const ml& x, const int& deep){
	this->reg = new Registro(x);
	this->deep = deep;
}

Registro * Recipiente::get_registro() const{
	return this->reg;
}

void Recipiente::set_registro(const ml& x){
	delete this->reg;
	this->reg = new Registro(x);
}

Recipiente * Recipiente::get_prox() const{
	return this->prox;
}

void Recipiente::set_prox(Recipiente * const prox){
	this->prox = prox;
}

int Recipiente::get_deep(){
	return this->deep;
}

void Recipiente::set_deep(const int deep){
	this->deep = deep;
}
