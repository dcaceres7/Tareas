#ifndef CONJUNTOS_H
#define CONJUNTOS_H
#include <iostream>

using namespace std;

class NODO{
public:
    int valor;
    NODO *sig;

    NODO(int v){
    valor=v;
    }

};

class Conjuntos
{
public:
    NODO *actualA,*actualB,*conjunto,*inicio;
    bool insertarA(int v);
    bool insertarB(int v);
    void interseccion();
    void Union();
    void diferencia();
    void imprimir();
    Conjuntos();
};

#endif // CONJUNTOS_H
