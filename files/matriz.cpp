#include<iostream>;
#include "natural.hpp";
using namespace std;

int main(void)
{
    NATURAL n1,n2;
    n2 = 20;
    n1 = 10;

    NATURAL soma = adicao(n1, n2);
    cout<<soma;
}
