#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QWidget>

namespace Ui {
class Principal;
}

class Principal : public QWidget
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);
    ~Principal();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

<<<<<<< HEAD
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

=======
<<<<<<< HEAD
=======
    void on_pushButton_4_clicked();

>>>>>>> origin/master
>>>>>>> origin/master
private:
    Ui::Principal *ui;
};

#endif // PRINCIPAL_H
