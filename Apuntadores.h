#ifndef APUNTADORES_H
#define APUNTADORES_H
#include <iostream>
#include "Carta.h"
using namespace std;
#include <QWidget>

namespace Ui {
class Apuntadores;
}

class Apuntadores : public QWidget
{
    Q_OBJECT

public:
     Carta *Inicio=NULL;
     Carta *Final=NULL;
         int Size=0;
          Carta *getFinal();
          void agregar(int num);
          Carta *getPos(int pos);
          void insertar(int numero,int pos);
          void eliminar(int pos);
          Carta *buscar(int num);
          void imprimir();

    explicit Apuntadores(QWidget *parent = 0);
    ~Apuntadores();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Apuntadores *ui;
};

#endif // APUNTADORES_H
