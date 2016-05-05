#include <stdio.h>

int main()
{
    int cc;
    int n1=0, n2=0, aux;
    
    do
    {
        for(cc=0;cc<=n2;cc++)
        {
            printf("*");
        }
        printf("\n");
        aux=n2+n1;
        n1=n2;
        n2=aux;
        
    }while(n2<=10);
    
    
    
    return 0;
}