#ifndef CARRO_H
#define CARRO_H
#include "veiculo.h"

class Carro : public Veiculo
{
public:
    Carro();
    virtual float Acelerar(float vel);
    float AcelerarProprio(float vel);
};

#endif // CARRO_H
