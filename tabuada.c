#include <stdio.h>

//gerar tabuada multiplicacao do 7
int main()
{
    int i, mult;
    
    printf("\ntabuada multiplicacao do 7");
    printf("\n__________________________");
    
    for(i=1;i<=10;i++)
    {
        mult = 7 * i;
        printf("\n 7 x %d = %d", i, mult);
    }
    
    return 0;
}