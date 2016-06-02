#include <stdio.h>

#define MAX_FUNC 8

int main()
{
    
    float salario[MAX_FUNC];
    float soma=0, media, perc;
    
    int i, cont=0;
    
    for(i=0; i<MAX_FUNC ;i++)
    {
        printf("\n Salario:");
        scanf("%f", &salario[i]);
        soma = soma + salario[i];
    }
    media = soma / i;
    printf ("\n Media salarial = %.2f", media);
    
    for(i=0; i<MAX_FUNC; i++ )
    {
        if(salario[i] > media)
            cont++;
        
    }
    
    perc = ( (float)cont/MAX_FUNC ) * 100;
    printf ("\nPercentagem = %.f %%", perc);
    
    return 0;
}