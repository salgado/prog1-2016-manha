#include <stdio.h>

int main()
{
    char lt;
    
    printf("\nEntre com uma letra MAIUSCULA:");
    lt = getchar();
    
    printf("\nCaracter lido = %c\n", lt);
    printf("\nCodigo ASCII = %d\n", lt);
    printf("\nConversao para minuscula = %c\n", lt+32);
    
    
    return 0;
}