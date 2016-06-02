#include <stdio.h>
#include <string.h>

int main()
{
    char tweet[140];
    int tam, i, hash=0;
    
    printf("\nentre com um tweet:");
    //scanf("%s", tweet);
    gets(tweet);
    
    tam = strlen(tweet);
    
    for(i=0; i<tam; i++)
    {
        if(tweet[i] == '#')
            hash++;
    }
    
    printf("\nEste tweet possui %d hashtags", hash);
    
    return 0 ;
}