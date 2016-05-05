#include <stdio.h>
/*
Faça um programa para ler um nome, av1 e av2.
Calcule a media e informe como no exemplo:
Qual o seu nome: Fulano
Entre com AV1: 6.6
Entre com AV2: 6.6
Ola Fulano, sua media = 6.6
*/
int main()
{
    float av1, av2, media;
    char nome[20];
    
    printf("\nQual o seu nome?");
    scanf("%s", nome);
    
    printf("\nEntre com a av1:");
    scanf("%f", &av1);
    
    printf("\nEntre com a av2:");
    scanf("%f", &av2);
    
    media = (av1+av2)/2;
    
    printf("\nOla %s, sua media = %.2f", nome, media);

    return 0;
}