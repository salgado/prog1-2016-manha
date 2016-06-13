#include <stdio.h>
#include <string.h>
/*

Faça um programa para ler uma frase e contar quantas vogais existem nela.

*/
int main()
{
    char frase[100];
    int tam, i, vogal=0;
    
    printf("\nEntre com uma frase:");
    gets(frase);
    
    tam = strlen(frase);
    
    for(i=0; i < tam; i++)
    {
        if(frase[i] == 'a' || frase[i] == 'A' || 
            frase[i] == 'e' || frase[i] == 'E' || 
            frase[i] == 'i' || frase[i] == 'I' || 
            frase[i] == 'o' || frase[i] == 'O' || 
            frase[i] == 'u' || frase[i] == 'U'  )
        {
            vogal++;
        }
    }
    
    printf("\nEsta frase possui %d vogais.", vogal);
    
    return 0;
}