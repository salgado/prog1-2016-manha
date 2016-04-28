#include <stdio.h>

//gerar tabuada multiplicacao do 7
int main()
{
    int i, mult, tab;
    
    for(tab = 1; tab<=10; tab++)
    {
        printf("\ntabuada multiplicacao do %d", tab);
        printf("\n__________________________");
        
        for(i=1;i<=10;i++)
        {
            mult = tab * i;
            printf("\n %d x %d = %d", tab, i, mult);
        }
    }
    
    return 0;
}