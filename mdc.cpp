#include<iostream>
using namespace std;

int mdc(int n,int m)
{
    if(n == 0) return m;
    if(m == 0) return n;

    int divisor = 1;
    int resultM = m;
    int resultN = n;
    int resultDivisaoM;
    int resultDivisaoN;
    int div = 1;

    while(!(resultDivisaoM == 1) && !(resultDivisaoN == 1))
    {
        resultDivisaoM = resultM/divisor;
        resultDivisaoN = resultDivisaoN/divisor;

        if(resultM%divisor == 0 && resultN%divisor == 0)
        {
            cout<<divisor<<"\n";
            div = divisor;
        }

        divisor++;
    }
    return div;
}


/*
int recMdc(int n,int m)
{
    if(n > m) {
            return recMdc(n,m);
    } else{
        if(n == 0){
            return m;
        } else {
            return recMdc(n,(m%n));
        }
    }

}
*/
int main(void)
{
    int result = mdc(70, 60);
    cout<<"-----------------"<<"\n";
    cout<<result<<"\n";
}
