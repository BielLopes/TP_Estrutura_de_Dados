#ifndef LISTAFRASCOS_H_INCLUDED
#define LISTAFRASCOS_H_INCLUDED
#include <iostream>


typedef struct celula_str *apontadorlista;
typedef struct celula_str{
    int valor;
    apontadorlista proximo;
    apontadorlista anterior;
}celula;

class ListaEncFrascos{
private:
    apontadorlista iniciolista;
    apontadorlista fim;
    int elementos;
public:

    ListaEncFrascos();
    //~ListaEncFrascos();
    void inserir (int valor);
    void remover (int valor);
    int tamanho ();
    void imprime ();
    int percorre(int esperado, ListaEncFrascos operacoes);
    void resultado (int esperado, ListaEncFrascos frascos, ListaEncFrascos anterior, int operacoes);



};

#endif // LISTAFRASCOS_H_INCLUDED
