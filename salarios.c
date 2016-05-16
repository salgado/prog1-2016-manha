#include <stdio.h>

int main()
{
    char nomes[5][20];
    float salarios[5];
    int i;
    
    //Entre com nome do 1. funcionario:
    for(i=0; i<5; i++)
    {
        printf("\nEntre com nome do %d. funcionario:", i+1);
        scanf("%s", nomes[i]);
        
        printf("\nEntre com salario do %d. funcionario:", i+1);
        scanf("%f", &salarios[i]);
    }
    
    //gerar relatorio
    printf("\nNome\t\tSalario Bruto\tSalario Liquido");
    printf("\n--------------------------------------------------");
    for(i=0;i<5;i++)
    {
        printf("\n%s\t\t%.2f\t\t%.2f", nomes[i], salarios[i], salarios[i]*0.8);
    }
    
    printf("\n--------------------------------------------------");
    
    return 0;
}