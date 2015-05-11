#ifndef PILAS_H
#define PILAS_H
#include<iostream>

using namespace std;

#include <QWidget>

namespace Ui {
class Pilas;
}

class Nodo{
 public:
     int valor;
     Nodo *anterior;
};

class Pilas : public QWidget
{
    Q_OBJECT

public:
    Nodo *tope;
    Nodo *getTope();
    bool sacar();
    bool anular();
    void meter(Nodo *obj);
    bool vacia();
    explicit Pilas(QWidget *parent = 0);
    ~Pilas();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Pilas *ui;
};

#endif // PILAS_H
