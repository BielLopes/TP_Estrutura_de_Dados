//#include "operacoes.cpp"
#include "listafrascos.h"
#include <cstdio>
#include <stdio.h>

int main (){
    ListaEncFrascos frascos;
    ListaEncFrascos operacoes;

    int valor;
    char opcao;
    while (scanf ("%d %c", &valor, &opcao) != EOF){
        switch (opcao){
    case 'i':
        frascos.inserir(valor);
        break;

    case 'r':
        frascos.remover(valor);
        break;
    case 'p':
        operacoes.resultado(valor, frascos, operacoes, 0);
        break;
    default:
        return 0;
    }

}
}




/*int main (){
    ListaEncFrascos lista;
    ListaEncFrascos teste;
    lista.inserir (30);
    lista.inserir(50);
    teste.resultado(130 ,lista, teste, 0);

    return 0;

}*/
