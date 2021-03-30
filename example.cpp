#include <stdio.h>
#include <string.h>
#define TamFrase 20
#define TamPalavra 10

int main()
{
    char S[TamFrase];
    char P[TamPalavra];
    printf("Digite uma frase: ");
    gets(S);
    printf("Digite uma palavra a ser buscada na frase: ");
    scanf("%s", P);

    if(strstr(S,P))
    {
        printf("Sim");
    } else {
        printf("Não");
    }
}
