#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20];
    int i, tam;
    
    printf("\nEntre com a palavra: ");
    scanf("%s", palavra);
    
    printf("\n"); //pula uma linha em branco
    
    //imprimir na ordem inversa
    tam = strlen(palavra);
    
    for(i=tam-1; i >=0 ; i--)
    {
        printf ("%c", palavra[i]);
    }
    
    printf("\n"); //pula uma linha em branco

    return 0;
    
}