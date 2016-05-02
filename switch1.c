#include <stdio.h>
int main()
{
    int num;
    puts("Entre com um numero de 1 a 3:");
    scanf("%d", &num);
    switch(num)
    {
        case 1:
            puts("Opcao 1 escolhida!");
            break;
        case 2:
            puts("Opcao 2 escolhida!");
            break;
        case 3:
            puts("Opcao 3 escolhida!");
            break;
        default:
            puts("Opcao inválida!");
    }
    return 0;    
}
