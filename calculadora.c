#include <stdio.h>

int main()
{
    int opc, continuar;
    int num1, num2;
    float res;
    
    do
    {
        //desenha o menu
        printf("\nQual operação deseja?");
        printf("\n1 - adição");
        printf("\n2 - subtração");
        printf("\n3 - multiplicação");
        printf("\n4 - divisão");
        printf("\nOpção:");
        scanf("%d", &opc);
        
        //ler 2 numeros
        printf("\nEntre com num1:");
        scanf("%d", &num1);
        
        printf("\nEntre com num2:");
        scanf("%d", &num2);
        
        //seleciona a operacao
        switch(opc)
        {
            case 1: //adicao
                res = num1 + num2;
                printf("\n %d + %d = %.2f", num1, num2, res);
                break;
            case 2: //subtracao
                res = num1 - num2;
                printf("\n %d - %d = %.2f", num1, num2, res);
                break;
            case 3: //multiplicacao
                res = num1 * num2;
                printf("\n %d * %d = %.2f", num1, num2, res);
                break;
            case 4: //dividir
                res = (float)num1 / num2;
                printf("\n %d / %d = %.2f", num1, num2, res);
                break;
        }
        
        //continuar no loop
        printf("\nDeseja continuar(1-s/2-n)?");
        scanf("%d", &continuar);
        
    }while(continuar == 1);
    
    printf("\nBye bye\n");
    
    return 0;
}