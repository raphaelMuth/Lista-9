#include <iostream>
#include <time.h>
#include "carro.h"

using namespace std;

int main()
{
    float velocidade = 10.0;
    Carro mustang;
    time_t inicio, fin;
    inicio = clock();

    for(int i =0; i<10000000; i++){
        velocidade = mustang.Acelerar(velocidade);
    }
    fin = clock()-inicio;
    cout<<"O tempo para a vinculacao dinamica e: "<<(double(fin)/CLOCKS_PER_SEC)<<"\n";

    velocidade = 10.0;
    inicio = clock();
    for(int i =0; i<10000000; i++){
        velocidade = mustang.AcelerarProprio(velocidade);
    }
    fin = clock()-inicio;
    cout<<"O tempo para a vinculacao estatica e: "<<(double(fin)/CLOCKS_PER_SEC)<<"\n";
    return 0;
}
