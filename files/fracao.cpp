#include<iostream>
using namespace std;

struct FRACAO
{
    int numerador;
    int denominador;
};

int main(void)
{
    FRACAO f;
    int n1 = 2;
    int n2 = 3;

    if(n2 < 0 || n2 > 0)
    {
        f.numerador = n1;
        f.denominador = n2;
    }

    cout<<"Sua fracao e: "<<f.numerador<<"\\"<<f.denominador ;
}
