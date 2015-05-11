#include "Apuntadores.h"
#include "ui_Apuntadores.h"

Apuntadores::Apuntadores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Apuntadores)
{
    ui->setupUi(this);
}

Apuntadores::~Apuntadores()
{
    delete ui;
}

Carta* Apuntadores::getFinal(){
    return Final;
}

void Apuntadores::agregar(int num){
    Size++;
    if(!Inicio){
        Inicio=new Carta(num);
        Final=Inicio;
    }
    else{
        Final->siguiente=new Carta(num);
        Final=Final->siguiente;
    }
}
Carta* Apuntadores::getPos(int pos){
    if(pos>=0&&pos<Size){
       if(pos==Size-1){
            return Final;
       }else{
            Carta *temp=Inicio;

            for(int i=1;i<=pos;i++)
                temp=temp->siguiente;
            return temp;
       }
    }
}

void Apuntadores::insertar(int numero,int pos){
    if(pos>=0&&pos<Size){
        if(pos==0){
            Carta *temp=new Carta(numero);
            temp->siguiente=Inicio;
            Inicio=temp;
            Size+=1;
        }else if(pos==Size-1){
            agregar(numero);
        }else{
            Carta *temp2=getPos(pos-1);
            Carta *t=new Carta(numero);
                   t->siguiente=temp2->siguiente;
                   temp2->siguiente=t;
            Size+=1;
        }
    }
}

void Apuntadores::eliminar(int pos){
    pos-=1;
    if(pos==Size-2){
        Carta *temp=getPos(pos);
        temp->siguiente=NULL;
        delete Final;
        Final=temp;
        Size--;
    }else if(pos==-1){
        Carta *temp=Inicio;
        Inicio=Inicio->siguiente;
        delete temp;
        Size--;
    }
      else if(pos>=0&&pos<Size-1){
        Carta *temp=getPos(pos);
        Carta *temp2=temp->siguiente;
        temp->siguiente=temp2->siguiente;
        delete temp2;
        Size--;
    }
}

Carta* Apuntadores::buscar(int num){
    Carta *temp=Inicio;
    for(int i=0;i<Size;i++){
        if(num==temp->getNumero())
            return temp;
        temp=temp->siguiente;
    }
    return NULL;
}
void Apuntadores::imprimir(){
    Carta *temp=Inicio;
       for(int i=0;i<Size;i++){
        cout<<"Carta: "<<temp->getNumero()<<endl;
       temp=temp->siguiente;
       }
}

void Apuntadores::on_pushButton_clicked()
{
    //Carta *c=new Carta;
    cout<<"Funcion Agregar."<<endl;
        agregar(5);
        agregar(3);
        agregar(7);
        agregar(9);
        imprimir();
        cout<<"Insertar el numero 8 en la posicion 0."<<endl;
        insertar(8,0);
        imprimir();
        cout<<"Insertar el numero 1 en la posicion 3."<<endl;
        insertar(1,3);
        imprimir();
        cout<<"getFinal:"<<getFinal()->getNumero()<<endl;
        cout<<"Eliminal la posicion 0"<<endl;
        eliminar(0);
        cout<<"Eliminal la posicion 3"<<endl;
        eliminar(3);
        imprimir();
        cout<<"Carta getPos: "<<getPos(1)<<endl;
        cout<<"Buscar Carta: "<<buscar(1)<<endl;


}
