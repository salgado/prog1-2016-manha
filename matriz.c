#include <stdio.h>

int main()
{
    int i, j;
    float notas[4][3]; //coluna 0, 1 e 2 = av1, av2 e av3
    float soma=0, media, av1, av2, av3;
    
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=2; j++)
        {
            //Entre com a av1 do aluno 1: 
            printf("\nEntre com a av%d do aluno %d : ", j+1, i+1);
            scanf("%f", &notas[i][j]);
        }
    }
    printf("\n");
    
    //imprimir listagem
    printf("\nNome do Aluno\tAV1\tAV2\tAV3");
    printf("\n----------------------------------------");
    for(i=0; i<=3; i++)
    {
        printf("\nAluno %d\t", i+1);
        for(j=0; j<=2; j++)
        {
            printf("\t%.2f", notas[i][j]);
        }
    }
    
    printf("\n----------------------------------------");
 
    //imprimir listagem da av1
    printf("\nNome do Aluno\tAV1");
    printf("\n---------------------------------");
    for(i=0; i<=3; i++)
    {
        printf("\nAluno %d\t", i+1);
        
        printf("\t%.2f", notas[i][0]);
        soma = soma + notas[i][0];
    }
    
    media = soma / i;
    
    printf("\n----------------------------------------");
    printf("\nMédia\t\t%.2f", media);
    printf("\n----------------------------------------");
    
    //relatorio de notas de um aluno
    printf("\nEntre com a matricula[1-4]: ");
    scanf("%d", &i);
    
    i--;
    
    printf("\nNome do Aluno\tAV1\tAV2\tAV3\tResultado");
    printf("\n----------------------------------------");
    printf("\nAluno %d\t", i+1);
    for(j=0; j<=2; j++)
    {
        printf("\t%.2f", notas[i][j]);
    }
    
    av1 = notas[i][0];
    av2 = notas[i][1];
    av3 = notas[i][2];
    
    //verificar resultado
    if(  (av1 + av2)/2  >=6 ||
         (av1 + av3)/2  >=6 ||
         (av2 + av3)/2  >=6  )
    {
        printf("\tAPROVADO");          
    }
    else
    {
        printf("\tREPROVADO");          
    }

    printf("\n----------------------------------------");

    
    
    
    return 0;
}