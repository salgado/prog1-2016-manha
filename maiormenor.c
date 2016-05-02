#include <stdio.h>

int main()
{
    int num;
    int resp;
    int maior=-999, menor=1000;
    
    do
    {
        printf("\nEntre com um numero[1-100]:");
        scanf("%d", &num);
        
        //guarda o maior numero
        if(num>maior)
            maior = num;
        
        // guarda o menor numero  
        if(num<menor)
            menor = num;
            
        //continua no loop?
        printf("\nDeseja continuar(1-s/2-n)?");
        scanf("%d", &resp);
        
    }while(resp == 1);
    
    printf ("\nMaior numero = %d\n", maior);
    printf ("\nMenor numero = %d\n", menor);
    
    return 0;
}