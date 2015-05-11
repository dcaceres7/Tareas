#include "ListaArreglo.h"
#include "ui_ListaArreglo.h"

ListaArreglo::ListaArreglo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListaArreglo)
{
    ui->setupUi(this);
}

ListaArreglo::~ListaArreglo()
{
    delete ui;
}

bool ListaArreglo::append(int num){
    if(actual<siz){
        arreglo[actual++]=num;
        return true;
    }
    return false;
}

int ListaArreglo::Search(int numero){
    for(int i=0;i<actual;i++){
        if(arreglo[i]==numero)
            return i;
    }
    return -1;
}

void ListaArreglo::Clear(){
    for(int i=0;i<actual;i++)
        arreglo[i]=0;
    actual=0;
}

bool ListaArreglo::eliminar(int pos){
    if(pos<actual){
        for(int i=pos;i<actual;i++){
            arreglo[i]=arreglo[i+1];
        }
        arreglo[--actual]=0;
        return true;
    }
    return false;
}

bool ListaArreglo::Insert(int pos,int num){
    if(actual<siz&&pos<=actual){
        for(int i=actual-1;i>=pos;i--)
            arreglo[i+1]=arreglo[i];
        arreglo[pos]=num;
        actual++;
        return true;
    }
    return false;
}

void ListaArreglo::imprimir(){
    cout<<"La lista es:"<<endl;
    for(int i=0;i<siz;i++){
        if(arreglo[i]!=0)
            cout<<arreglo[i]<<endl;
    }
}
void ListaArreglo::play(){
    cout<<"Append:"<<endl;
    append(6);
    append(4);
    append(9);
    append(10);
    imprimir();
    cout<<"Insertar el 3 posicion 2."<<endl;
    Insert(2,3);
    imprimir();
    cout<<"Insertar el 7 posicion 0."<<endl;
    Insert(0,7);
    imprimir();
    cout<<"Eliminar posicion 0."<<endl;
    eliminar(0);
    cout<<"Eliminar posicion 3."<<endl;
    eliminar(3);
    imprimir();
    cout<<"El numero 3 esta en la posicion:" <<Search(3)<<endl;
    Clear();
     //imprimir();

}

void ListaArreglo::on_pushButton_clicked()
{

}
