#include "Principal.h"
#include "ui_Principal.h"
#include "Duplicado.h"
#include "ListaArreglo.h"
#include "Apuntadores.h"

Principal::Principal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::on_pushButton_clicked()
{
    Duplicado *dpl=new Duplicado();
    dpl->llenar();
    dpl->imprimir();
    dpl->show();


}

void Principal::on_pushButton_2_clicked()
{
    ListaArreglo *lst=new ListaArreglo();
    lst->play();
}

void Principal::on_pushButton_3_clicked()
{
    Apuntadores *apt=new Apuntadores();
    apt->show();
}
