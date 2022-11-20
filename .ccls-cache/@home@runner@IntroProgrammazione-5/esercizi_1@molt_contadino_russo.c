#include <stdio.h>

void main()
{
    int a,b,molt=0;
    printf("Inserire il valore numero 1 da moltiplicare: ");
    scanf("%d",&a);
    printf("Inserire il valore numero 2 da moltiplicare: ");
    scanf("%d",&b);

    while(a!=0)
    {
        if(a%2==1)
        {
            molt+=b;
            a=a/2;
            b*=2; 
        }
        else
        { 
            a=a/2;
            b*=2; 
        }
    }
    printf("Il risultato della moltiplicazione russa è: %d",molt);
}