#include <stdio.h>

void dec2bin_v0(int num)
{
    int bin=0, rest, pot10=1;
    while(num>0)
    {
        rest=num%2;
        num=num/2;
        bin= bin + (rest*pot10);
        pot10=pot10*10;
    }
    printf("%d\n", bin);

}

void dec2bin_v1(int num)  //utilizando vetor
{
    int rest, i=0;
    int bin[20], j;
    
    printf("\n");
    
    do{
        rest = num % 2;
        num = num / 2;
        bin[i] = rest;
        i++;
    }while(num>0);
    
    for(j=i-1; j>=0; j--)
        printf("%d", bin[j]);
}


int main()
{
    int num;
    
    printf("entre com um inteiro: ");
    scanf("%d", &num);

    dec2bin_v0(num);
    dec2bin_v1(num);
    
    return 0;
}