#include<iostream>
using namespace std;

int potencia(int number, int n)
{
    int result = 1;

    if(n >= 1) {
        for(int i = 1;i <= n; i++)
        {
            result *= number;
        }
    } else {
        result = 1;
    }

    return result;
}

int recurPotencia(int number, int n)
{
   if(n == 0){
        return 1;
   } else {
        return number * recurPotencia(number, n-1);
   }
}

int fatorial(int a)
{
    int fatorial = a;

    if(a == 0) return 1;
    else
        for(int i = a - 1; i >= 1 ; i--)
        {
            fatorial *= i;
        }
    return fatorial;
}

int recurFatorial(int a)
{
    if(a == 0) return 1;
    else
        return a * recurFatorial(a-1);
}

void exibeTexto(int n)
{
    if(n == 0) {
        return;
    } else {
        cout<<"Oi"<<"\n";
        n--;
        exibeTexto(n);
    }
}

int main(void)
{
    int result;
    exibeTexto(9);
    //int a = recurFatorial(4);

    //cout<<"Esse e o resultado da funcao: "<<a;
}
