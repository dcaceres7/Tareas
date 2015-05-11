#ifndef LISTAARREGLO_H
#define LISTAARREGLO_H
#include <iostream>
using namespace std;
#include <QWidget>

namespace Ui {
class ListaArreglo;
}

class ListaArreglo : public QWidget
{
    Q_OBJECT

public:
        int siz=15,actual=0;
        int arreglo[15];
        bool append(int num);
        int Search(int numero);
        void Clear();
        bool eliminar(int pos);
        bool Insert(int pos,int num);
        void imprimir();
        void play();
    explicit ListaArreglo(QWidget *parent = 0);
    ~ListaArreglo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ListaArreglo *ui;
};

#endif // LISTAARREGLO_H
