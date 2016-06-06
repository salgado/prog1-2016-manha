#include <stdio.h>

double fat(int n)
{
    double fatorial;
    
    for(fatorial=1; n>=1; n--)
        fatorial = fatorial * n;
    
    return fatorial;
}


int main()
{
    int num;
    double result;
    
    printf("\nEntre com o numero:");
    scanf("%d", &num);
    
    result = fat(num);
    
    printf("\nO fatorial de %d = %f\n", num, result);
    
    return 0;
}