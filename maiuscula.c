#include <stdio.h>
/*
Faça um programa em C para ler uma letra e dizer 
se é maiuscula ou minuscula.
*/
int main()
{
    char letra;
    
    printf("\nEntre com uma letra:");
    letra = getchar();
    
    if(letra>=65 && letra <=90) //maiuscula
    {
        printf("\nVocê digitou uma letra maiuscula.\n");
    }
    else if(letra>=97 && letra <=122)  //minuscula
    {
        printf("\nVocê digitou uma letra minuscula.\n");
    }
    else
    {
        printf("\nProvavelmente você digitou um simbolo.\n");
    }
    
    return 0;
}