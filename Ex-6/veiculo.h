#ifndef VEICULO_H
#define VEICULO_H


class Veiculo
{
public:
    Veiculo();
    virtual float Acelerar(float vel) = 0;
};

#endif // VEICULO_H
