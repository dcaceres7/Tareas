#include "Cola.h"

Cola::Cola()
{

}
void Cola::ponerCola(nodo *n){
    if(frente==NULL){
        frente=n;
        ultimo=n;
        return;
    }
    ultimo->ant=n;
    ultimo=n;
}

 bool Cola::quitarCola(){
    nodo *temp;
    if(frente){
        temp=frente;
        frente=frente->ant;
        delete temp;
        return true;
    }
    return false;
 }

void Cola::anular(){
    while(quitarCola());
}

nodo* Cola::getFrente(){
    return frente;
}

bool Cola::vacia(){
    if(frente)
       return false;
    return true;
}

void Cola::play(){
    nodo *n=new nodo();
    nodo *n2=new nodo();
    nodo *n3=new nodo();
    n->valor=15;
    n2->valor=18;
    n3->valor=20;
    ponerCola(n);
    ponerCola(n2);
    ponerCola(n3);

    cout<<n->valor<<endl;
    cout<<n2->valor<<endl;
    cout<<n3->valor<<endl;
    cout<<"Frente "<<getFrente()->valor<<endl;
    cout<<endl;
    cout<<"Quitar Cola"<<endl;
    quitarCola();
    cout<<n2->valor<<endl;
    cout<<n3->valor<<endl;
    cout<<endl;
    cout<<"Frente "<<getFrente()->valor<<endl;
    cout<<endl;
    cout<<"Quitar Cola"<<endl;
    quitarCola();
    cout<<n3->valor<<endl;
    cout<<endl;
    cout<<"Frente "<<getFrente()->valor<<endl;
    cout<<"Anulando Lista"<<endl;
    anular();
}

