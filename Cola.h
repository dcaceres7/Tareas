#ifndef COLA_H
#define COLA_H
#include <iostream>
using namespace std;

class nodo{
public:
    int valor;
    nodo *ant;
};

class Cola
{
public:
    nodo *frente,*ultimo;
    void ponerCola(nodo *n);
     bool quitarCola();
     void anular();
     nodo *getFrente();
     bool vacia();
     void play();
    Cola();
};

#endif // COLA_H
