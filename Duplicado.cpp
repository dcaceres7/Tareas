#include "Duplicado.h"
#include "ui_Duplicado.h"

Duplicado::Duplicado(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Duplicado)
{
    ui->setupUi(this);
}

Duplicado::~Duplicado()
{
    delete ui;
}

bool  Duplicado::buscarDuplicado(int numero){
    for(int i=0;i<8;i++){
        if(arr2[i]==numero)
            return true;
    }
    return false;
}

void Duplicado::agregar(int numero){
    for(int i=0;i<8;i++){
        if(arr2[i]==0){
            arr2[i]=numero;
            return;
        }
    }
}

void Duplicado::llenar(){
    arr[0]=1;
    arr[1]=9;
    arr[2]=2;
    arr[3]=1;
    arr[4]=9;
    arr[5]=2;
    arr[6]=1;
    arr[7]=7;
}

void Duplicado::imprimir(){
    //cout<<"------------------------------------------------"<<endl;
    for(int i=0;i<8;i++){
      cout<<"Los numeros son: "<<arr[i]<<endl;
    }
    cout<<"------------------------------------------------"<<endl;
}

void Duplicado::on_pushButton_clicked()
{
    llenar();

    for(int i=0;i<8;i++){
       if(!buscarDuplicado(arr[i])){
          agregar(arr[i]);
       }
    }

    for(int i=0;i<8;i++){
      if(arr2[i]!=0)
      cout<<"Los numeros sin duplicado son: "<<arr2[i]<<endl;
    }


}
