#include "Pilas.h"
#include "ui_Pilas.h"

Pilas::Pilas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pilas)
{
    ui->setupUi(this);
}

Pilas::~Pilas()
{
    delete ui;
}
Nodo* Pilas::getTope(){
return tope;
}

bool Pilas::sacar(){
    if(tope){
        Nodo *t=tope;
        tope=tope->anterior;
        delete t;
        return true;
    }
    return false;
}

bool Pilas::anular(){
    while(sacar());
}

void Pilas::meter(Nodo *obj){
    if(tope)
      obj->anterior=tope;
    tope=obj;
}

bool Pilas::vacia(){
    if(tope)
        return false;
    return true;
}

void Pilas::on_pushButton_clicked()
{
    Nodo* ob=new Nodo();
        Nodo* ob2=new Nodo();
        Nodo* ob3=new Nodo();
        ob->valor=1;
        ob2->valor=2;
        ob3->valor=3;
        meter(ob);
        meter(ob2);
        meter(ob3);

        cout<<ob->valor<<endl;
        cout<<ob2->valor<<endl;
        cout<<ob3->valor<<endl;
        cout<<"Tope "<<getTope()->valor<<endl;
        cout<<endl;
        cout<<"Sacar"<<endl;
        sacar();
        cout<<ob->valor<<endl;
        cout<<ob2->valor<<endl;
        cout<<"Tope "<<getTope()->valor<<endl;
        cout<<endl;
        sacar();
        meter(ob);
        cout<<ob2->valor<<endl;
        cout<<ob3->valor<<endl;
        cout<<ob->valor<<endl;
        cout<<"Tope "<<getTope()->valor<<endl;
}
