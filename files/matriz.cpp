#include<iostream>
using namespace std;

void inicializa(int m[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m[i][j] = 0;
        }
    }
}

void produto(int m[3][3], int m1[3][3])
{
    int v2[3][3];
    inicializa(v2);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            v2[i][j] = m[i][j] * m1[i][j];
        }
    }

   cout<<v2[0][2]<<"\n";
}

void inversa(int m[3][3])
{
    int inversa[3][3], aux, aux2;
    inicializa(inversa);

    for(int i = 0; i < 3; i++)
    {
        inversa[0][i] = m[2][i];
        inversa[1][i] = m[1][i];
        inversa[2][i] = m[0][i];
    }

    cout<<"----------------------------------------"<<"\n";

    /*---------------------------
        for(int k = 2;k >= 0; k--)
        {
            for(int l = 2;l >= 0; l--)
            {
                cout<<inversa[k][l]<<"\n";
            }
        }
    ------------------------------*/
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<inversa[i][j]<<"\n";
            }
        }
}

void transposta(int m[3][3])
{
    int transposta[3][3];
    inicializa(transposta);

    for(int i = 0; i < 3; i++)
    {
        transposta[0][i] = m[i][0];
        transposta[1][i] = m[i][1];
        transposta[2][i] = m[i][2];
    }

    cout<<"----------------------------------------"<<"\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<transposta[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(void)
{
    int v[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                  };

    int v1[3][3] = {
                     {10,11,12},
                     {13,14,15},
                     {16,17,18}
                   };

    produto(v,v1);
    inversa(v1);
    transposta(v1);
}
