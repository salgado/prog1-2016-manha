#include <stdio.h>

float media_lasalle(float nota1, float nota2, float nota3)
{
    float media;
    
    if(nota1 >= nota2 && nota2>= nota3)
    {
        media = (nota1 + nota2) / 2;
    }
    else if (nota1 >= nota2 && nota2 <= nota3)
    {
        media = (nota1 + nota3) / 2;
    }
    else 
    {
        media = (nota2 + nota3) / 2; 
    }
    
    return media;
}

int main()
{
    float av1, av2, av3;
    float media;
    
    //ler as notas
    printf("\nEntre com a av1: ");
    scanf("%f", &av1);
    
    printf("\nEntre com a av2: ");
    scanf("%f", &av2);
    
    printf("\nEntre com a av3: ");
    scanf("%f", &av3);
    
    media = media_lasalle(av1, av2, av3);
    
    printf("\n media aluno = %.2f \n", media);
    
    return 0;
    
    
}