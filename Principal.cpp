#include "Principal.h"
#include "ui_Principal.h"
#include "Duplicado.h"

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
