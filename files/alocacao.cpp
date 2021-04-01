#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(void)
{

    char *s;
    s = (char *) malloc(2000);

    if(s == NULL)
    {
        cout<<"Erro de alocacao\n";
    }


    string v[3] = {"asdasd","sdfsadf","sdfsdfsaf"};
    int qtd;

    qtd = sizeof(v)/sizeof(v[0]);

    cout<<qtd;
}
