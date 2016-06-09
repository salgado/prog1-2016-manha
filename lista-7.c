#include <stdio.h>
#include <math.h>

int main()
{
    float c1, c2, hip;
    
    printf("\nEntre com cateto 1:");
    scanf("%f", &c1);
    
    printf("\nEntre com cateto 2:");
    scanf("%f", &c2);
    
    hip = sqrt( (pow(c1,2) + pow(c2,2)) );
    
    printf("\nhipotenuza = %.2f", hip);
    
    return 0;
}