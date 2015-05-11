#ifndef CARTA_H
#define CARTA_H


class Carta
{
public:
    int numero;
    public:
        Carta *siguiente;
        Carta(int num){
        numero=num;
        }
        int getNumero();
        Carta();
};

#endif // CARTA_H
