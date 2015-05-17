#include "Conjuntos.h"

Conjuntos::Conjuntos()
{

}

bool Conjuntos::insertarA(int v){
    if(!actualA){
        actualA=new NODO(v);

        return true;
    }
    NODO *actual=actualA;
    if(actual->valor==v)
        return false;
    if(v<actualA->valor){
        actualA=new NODO(v);
        actualA->sig=actual;
        return true;
    }
    while(true){
        if(actual->sig&&v>actual->sig->valor)
            actual=actual->sig;
        if(!actual->sig)
            break;
        if(v<actual->sig->valor)
            break;
    }
    if(actual){
        NODO *temp=actual->sig;
        actual->sig=new NODO(v);
        actual->sig->sig=temp;
    }
    return true;
}



bool Conjuntos::insertarB(int v){
    if(!actualB){
        actualB=new NODO(v);

        return true;
    }
    NODO *actual=actualB;
    if(actual->valor==v)
        return false;
    if(v<actualB->valor){
        actualB=new NODO(v);
        actualB->sig=actual;
        return true;
    }
    while(true){
        if(actual->sig&&v>actual->sig->valor)
            actual=actual->sig;
        if(!actual->sig)
            break;
        if(v<actual->sig->valor)
            break;
    }
    if(actual){
        NODO *temp=actual->sig;
        actual->sig=new NODO(v);
        actual->sig->sig=temp;
    }
    return true;
}


void Conjuntos::interseccion(){
   while(actualA&&actualB){
      if(actualA->valor==actualB->valor){
        conjunto=actualA;
        actualA=actualA->sig;
        actualB=actualB->sig;
      }else if(actualA->valor>actualB->valor){
        actualB=actualB->sig;
      }else{
        actualA=actualA->sig;
      }
   }
}


void Conjuntos::Union(){
   while(actualA&&actualB){
        if(actualA>actualB){
            conjunto=actualB;
            actualB=actualB->sig;
        }else if(actualA==actualB){
            conjunto=actualA;
            actualA=actualA->sig;
            actualB=actualB->sig;
        }else{
            actualA=actualA->sig;
        }
   }
}

void Conjuntos::diferencia(){
   while(actualA&&actualB){
        if(actualA>actualB){
            conjunto=actualB;
            actualB=actualB->sig;
        }else if(actualA==actualB){
            actualA=actualA->sig;
            actualB=actualB->sig;
        }else{
            actualA=actualA->sig;
        }
   }
}


void Conjuntos::imprimir(){
    NODO *temp=actualA;
    for(int i=0;i<3;i++){
        cout<<temp->valor<<endl;
        temp=temp->sig;
    }
    cout<<endl;
    NODO *temp2=actualB;
    for(int i=0;i<3;i++){
        cout<<temp2->valor<<endl;
        temp2=temp2->sig;
    }
}
