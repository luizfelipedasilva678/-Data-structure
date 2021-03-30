#include<iostream>
using namespace std;

typedef int NATURAL;

NATURAL zero()
{
    return 0;
}

NATURAL adicao(NATURAL n1, NATURAL n2)
{
    return n1 + n2;
}

NATURAL subtracao(NATURAL n1, NATURAL n2)
{
    if(n1 >= n2)
    {
        return n1 - n2;
    }

    return false;
}

NATURAL multi(NATURAL n1, NATURAL n2)
{
    return n1 * n2;
}

bool igual(NATURAL n1, NATURAL n2)
{
    if(n1 == n2){
        return true;
    }else {
        return false;
    }
}

NATURAL sucessor(NATURAL n1)
{
    return n1 + 1;
}

bool maior(NATURAL n1, NATURAL n2)
{
    if(n1 > n2) {
        return true;
    } else {
        return false;
    }
}

bool menor(NATURAL n1, NATURAL n2)
{
    if(n1 < n2) {
        return true;
    } else {
        return false;
    }
}
