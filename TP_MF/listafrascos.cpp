#include "listafrascos.h"


ListaEncFrascos::ListaEncFrascos(){ //Construtor
    apontadorlista novo = new celula;
    this->iniciolista=novo;
    novo->valor=0;
    this->fim=novo;
    novo->proximo=NULL;
    novo->anterior=NULL;
    this->elementos=0;
}


void ListaEncFrascos::inserir(int valor){ //Insere no fim da lista

		apontadorlista novo = new celula;
        novo->valor = valor;
		novo->anterior = this->fim;
        this->fim->proximo = novo;
		this->fim = novo;
		novo->proximo = NULL;
		this->elementos++;
	}

void ListaEncFrascos::remover (int valor){ // Remove o valor desejado
    apontadorlista auxiliar= this->iniciolista->proximo;
    while (auxiliar->valor!=valor){
         auxiliar=auxiliar->proximo;
        }
        if (auxiliar==fim){
            auxiliar->anterior->proximo=auxiliar->proximo;
            this->fim=auxiliar->anterior;
            delete auxiliar;
        }
            else{
            auxiliar->anterior->proximo=auxiliar->proximo;
            auxiliar->proximo->anterior=auxiliar->anterior;
            delete auxiliar;
            }

    this->elementos--;
}

int ListaEncFrascos::tamanho (){ //Retorna a quantidade de elementos
    return this->elementos;
}

void ListaEncFrascos::imprime (){
    apontadorlista aux = this->iniciolista->proximo;
    for (int i=0; i<this->elementos; i++){
        std::cout<<aux->valor<<" ";
        aux=aux->proximo;
    }
    std::cout<<std::endl;
}

int ListaEncFrascos::percorre(int esperado,  ListaEncFrascos operacoes){ // Percorre a lista até encontrar o desejado
    apontadorlista p = operacoes.iniciolista;
    while (p!=NULL){
        if (p->valor==esperado)  return 1;
        else
        p=p->proximo;
    }
    return 0;
}

void ListaEncFrascos::resultado(int esperado, ListaEncFrascos frascos, ListaEncFrascos anterior, int operacoes){ // Realiza as operações desejadas

    /*
    if (anterior.percorre(esperado, anterior)){

        std::cout<<operacoes<<std::endl;
    }
    */
    
        operacoes++;

        ListaEncFrascos nova;

        apontadorlista panterior= anterior.iniciolista;
        while (panterior!=NULL){
            apontadorlista pfrascos=frascos.iniciolista->proximo;
            while (pfrascos!=NULL){
                int soma = (panterior->valor) + (pfrascos -> valor);
                if(soma == esperado) { std::cout<<operacoes + 1<<std::endl; return;}

                nova.inserir(soma);

                int sub = (panterior->valor) - (pfrascos -> valor);
                if(sub == esperado){ std::cout<<operacoes + 1<<std::endl; return;}

                if (sub>0)
                    nova.inserir(sub);

                pfrascos=pfrascos->proximo;
            }

            panterior=panterior->proximo;
        }
        nova.resultado(esperado, frascos, nova, operacoes);

    
}

