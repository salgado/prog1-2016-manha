#include <stdio.h>

int main()
{
    
    if ( (10 || (5-2)) && !((6 / 2) - (1 + 2)) )
    {
        printf("\nVerdadeiro");
    }
    else
    {
        printf("\nFalso");
    }
    
    return 0;
}