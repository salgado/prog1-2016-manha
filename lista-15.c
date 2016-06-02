#include <stdio.h>

int main()
{
    int fim, ini=1, espaco=0;
    int j, i;
    
    printf("\nEntre com numero impar:");
    scanf("%d", &fim);
    
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
    
    return 0;
}