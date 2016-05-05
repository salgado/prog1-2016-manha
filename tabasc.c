#include <stdio.h>

//gera tabela ascii de 33 a 126
int main()
{
    int cc;
    
    printf("\nTabela ASCII");
    printf("\n-------------");
    printf("\nDec\tChar");
    for(cc=33; cc<=126; cc++)
    {
        printf("\n%d\t%c",cc,cc);
    }
    
    return 0;
}