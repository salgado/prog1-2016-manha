#include <stdio.h>
/*
Fazer um programa em C para imprimir a tabela ASCII.
*/

void tabela_ascII(int ini, int fim)
{
    int i;
    
    printf("\nDec\tHex\tSimbolo");
    for(i=ini; i<=fim; i++)
    {
        printf("\n%d\t%x\t%c", i, i, i);
    }
    
}

int main()
{
    tabela_ascII(32, 64);
    return 0;
}
