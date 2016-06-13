#include <stdio.h>

/*
 Faça um programa em C para converter graus Celsius para Fahrenheit.
Seu programa deve ler o valor em Celsius, calcular e imprimir o correspondente e, Fahrenheit.
Fórmula: F = C × 1,8 + 32
*/

int main()
{
    float celsius, fah;
    
    printf("\nEntre com temperatura em Celsius:");
    scanf("%f", &celsius);
    
    fah = celsius*1.8 + 32;
    
    printf ("\nTemperatura convertida para Fahreinheit=%.2f", fah);
    
    return 0;
}