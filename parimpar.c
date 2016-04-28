#include <stdio.h>

int main()
{
    int num;
    int resto;
    
    printf("\nEntre com num:");
    scanf("%d", &num);
    
    resto = num % 2;
    
    if(resto == 0)
    {
        printf("\n Este numero eh par.\n");
    }
    else
    {
        printf("\nEste numero eh impar.\n");
    }
    
    
    return 0;
}