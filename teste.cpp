#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

class Retangulo {

private:
    int base, altura;

public:
    void Inic(int b, int h);
    void ImprimeSaida();
};

void Retangulo::Inic(int b, int h)
{ base = b; altura = h; }

void Retangulo::ImprimeSaida()
{ cout << "\nBase = " << base << " Altura = " << altura;
  cout << "\n�rea = " << (base*altura); }

int main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    Retangulo x, y;
    x.Inic(5,3);
    y.Inic(10,6);
    x.ImprimeSaida();
    y.ImprimeSaida();
    return 0;

};

    //Pausa o programa ap�s executar
