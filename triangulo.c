#include <stdio.h>

int main()
{
    
    int l1, l2, l3;
    
    //l1 = 20; l2= 20, l3= 40;printf("l1 = 20; l2= 20, l3= 40;\n");
    l1 = 40; l2= 20, l3= 40;printf("l1 = 20; l2= 20, l3= 40;\n");
    //l1 = 2; l2= 2, l3= 2; printf ("l1 = 2; l2= 2, l3= 2\n");
    //l1 = 6; l2= 5, l3= 4; printf( "l1 = 6; l2= 5, l3= 4;\n");
    //l1 = 6; l2= 15, l3= 14; printf( "l1 = 6; l2= 5, l3= 4;\n");
    
    if( (l1 == l2 && l1 == l3 ) ||
    (l2 == l1 && l2 == l3) ||
    (l3 == l1 && l3 == l2))
    {
        printf ("Equilatero");
    }
    
    if ((l1 == l2) && (l1>l3 || l1 < l3) || 
    (l2 == l3) && (l2>l1 || l2 < l1) || 
    (l3 == l1) && (l3>l2 || l3 < l2) )
    {
        printf ("Isosceles");
    }
    
    if ((l1>l2 || l1<l2) && (l1>l3 || l1<l3) ||
    (l2>l1 || l2<l1) && (l2>l3 || l2<l3) ||
    (l3>l2 || l3<l2) && (l3>l1 || l3<l1)
    )
    {
        printf ("Escaleno!");
    }
}