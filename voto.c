#include <stdio.h>

int main()
{
    int idade;
    
    printf("\n Entre com a idade:");
    scanf("%d", &idade);
    
    if(idade < 16)
    {
        printf("\nVoto NAO PERMITIDO!\n");
    }
    else if (idade == 16 || idade == 17 || idade > 70 )
    {
        printf("\n Voto FACULTATIVO!");
    }
    else 
    {
        printf("\n Voto OBRIGATORIO");
    }
    
    return 0;
}