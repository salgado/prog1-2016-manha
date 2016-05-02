#include <stdio.h>

int main()
{
    int x=0;
    while(1)
    {
        puts("Testando break!");
        if (x>10)
            break;
        x++;
    }
    
    return 0;
}