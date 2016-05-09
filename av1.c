#include <stdio.h>
/*
Fazer um programa em C para ler a av1 de 10 alunos, calcular e imprimir a média, como no exemplo:
Entre com a av1 do aluno 1: 6.6
*/
int main()
{
    int i, qtdMaior=0;
    float av1[10];
    float soma=0, media=0;
    float maior=-999;
    int qtdMaiorMedia6 = 0;
    float percMaiorMedia6=0;
    
    //ler ocorrencias do vetor
    for(i=0; i<=9;i++)
    {
        printf("\nEntre com a av1 do aluno %d:", i+1);
        scanf("%f", &av1[i]);
        soma = soma + av1[i];
        
        //guarda a maior nota
        if(av1[i] > maior)
        {
            maior = av1[i];
        }
    }
    
    media = soma / i;
    
    printf ("\nMedia = %.2f\n", media);

    //percorrer o vetor e imprimir nota maior ou igual media
    for(i=0;i<=9;i++)
    {
        if( av1[i] >= media )
        {
            printf("\nEsta nota >= media - %.2f", av1[i]);
        }
        
        if(av1[i] == maior)
        {
            qtdMaior++;
        }
        
        if(av1[i] >= 6)
        {
            qtdMaiorMedia6++;
        }
    }
    
    percMaiorMedia6 = (float)qtdMaiorMedia6 / i;
    
    //imprimir relatorio
    printf("\n %d alunos tiraram a maior nota = %.2f\n", qtdMaior, maior);
    printf("\n Porcentagem de alunos com nota maior media 6 = %.2f%% \n", percMaiorMedia6*100);
    
    return 0;
}