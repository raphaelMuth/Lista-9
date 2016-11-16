#include "carro.h"

Carro::Carro()
{

}

float Carro::Acelerar(float vel){
    return vel + vel* 0.1;
}

float Carro::AcelerarProprio(float vel){
    return vel + vel* 0.1;
}
