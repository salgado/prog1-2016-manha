#include <stdio.h>

int main()
{
    //declara variaveis
    int num1, num2;
    int soma, sub, mult;
    float div;
    
    //ler do teclado num1 e num2
    printf("\nEntre com num1:");
    scanf("%d", &num1);
    
    printf("\nEntre com num2:");
    scanf("%d", &num2);
    
    //calcular operacoes matematicas
    soma = num1+ num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    
    //exibir o resultado
    printf("\nA Soma de %d + %d = %d", num1, num2, soma);
    printf("\nA Subtracao de %d - %d = %d", num1, num2, sub);
    printf("\nA Multiplicacao de %d * %d = %d", num1, num2, mult);
    printf("\nA Divisao de %d / %d = %f\n", num1, num2, div);
    
    
    return 0;
    
}
