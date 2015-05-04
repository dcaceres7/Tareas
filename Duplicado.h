#ifndef DUPLICADO_H
#define DUPLICADO_H
#include <iostream>
#include <QWidget>

using namespace std;

namespace Ui {
class Duplicado;
}

class Duplicado : public QWidget
{
    Q_OBJECT

public:
    explicit Duplicado(QWidget *parent = 0);
    ~Duplicado();
    int arr[8],arr2[8];
    bool  buscarDuplicado(int numero);
    void agregar(int numero);
    void llenar();
    void imprimir();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Duplicado *ui;
};

#endif // DUPLICADO_H
