#include <stdio.h>
#include <math.h>

int main()
{
    int opc, continuar;
    int num1;
    float res;
    
    do
    {
        //desenha o menu
        printf("\nQual operação deseja?");
        printf("\n1 - raiz quadrada");
        printf("\n2 - potencia de 2");
        printf("\nOpção:");
        scanf("%d", &opc);
        
        //ler 1 numeros
        printf("\nEntre com num1:");
        scanf("%d", &num1);
        
        //seleciona a operacao
        switch(opc)
        {
            case 1: //raiz quadrada
                res = sqrt(num1);
                printf("\n Raiz quadrada de %d = %.2f", num1, res);
                break;
            case 2: //potencia
                res = pow(num1, 2);
                printf("\n O quadrado de %d = %.2f", num1, res);
                break;
        }
        
        //continuar no loop
        printf("\nDeseja continuar(1-s/2-n)?");
        scanf("%d", &continuar);
        
    }while(continuar == 1);
    
    printf("\nBye bye\n");
    
    return 0;
}