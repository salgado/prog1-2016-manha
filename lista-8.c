#include <stdio.h>
/* lista 8
Faça um programa em C par ler e contabilizar os votos de 2 candidatos: 
Canditado 1 e Candidato 2. Após a leitura do voto, 
deve-se perguntar se deseja continuar(s/n) . 
O programa só termina quando o usuário não desejar mais continuar. 
Ao final, o programa deve informar a percentagem de votos do candidato 1 e candidato 2.
*/

int main()
{
    float votoCand1=0, votoCand2=0;
    int voto;
    char continuar;
    
    do{
        printf("\nEntre com voto");
        printf("\n1 - Dilma");
        printf("\n2 - Aecio");
        printf("\nOpção: ");
        scanf("%d", &voto);
        
        if(voto == 1)
            votoCand1++;
        else if (voto == 2)
            votoCand2++;
            
        printf("\nDeseja continuar(s/n)? ");
        scanf(" %c", &continuar);
        
    }while(continuar == 's' || continuar == 'S');
    
    printf("\nPercentagem de votos do candidato 1 = %.2f%%", 
                     (votoCand1/(votoCand1+votoCand2))*100 );
    printf("\nPercentagem de votos do candidato 2 = %.2f%%", 
                     (votoCand2/(votoCand1+votoCand2))*100 );
    
    
    return 0;
}