#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20];
    int i, j, tam, palindromo=0;
    
    printf("\nEntre com a palavra: ");
    scanf("%s", palavra);
    
    printf("\n"); //pula uma linha em branco
    
    //imprimir na ordem inversa
    tam = strlen(palavra);
    
    j = tam-1;
    for(i=0;i<tam;i++)
    {
    
        if(palavra[i] == palavra[j])
            palindromo++;
        
        j--;
    }
    
    if(palindromo == tam)
        printf("\n%s é um palindromo.", palavra);
    else
        printf("\n%s NÃO é um palíndromo", palavra);

    
    printf("\n"); //pula uma linha em branco

    return 0;
    
}