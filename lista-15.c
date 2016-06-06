#include <stdio.h>

void triangulo(int fim)
{
    int ini=1, espaco=0;
    int j, i;
    
    do
    {
        printf("\n");
    
        for(j=1; j<=espaco; j++)
            printf(" ");
            
        for(i=ini; i<=fim; i++)
            printf("%d ", i);
            
        espaco = espaco + 2;
        ini++;
        fim--;
    }while(ini<=fim);
    
}

int main()
{
    int fim;
    
    printf("\nEntre com numero impar:");
    scanf("%d", &fim);
    
    triangulo(fim);
    triangulo(fim/2);
    
    return 0;
}