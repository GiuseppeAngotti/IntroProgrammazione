#include <stdio.h>

void main()
{
    int a,b,somax=0;
    
    printf("Inserire a: ");
    scanf("%d",&a);

    printf("Inserire b: ");
    scanf("%d",&b);

    if(b<0)
    {
        printf("%d è negativo\n",b);
        somax+=(-b);
    }
    else
    {
        printf("%d è positivo\n",b);
        somax+=b;
    }

    if(a%2==0)
    {
        printf("%d è pari\n",a);
    }
    else
    {
        printf("%d è dispari\n",a);
    }

    printf("Somma a+b= %d\n",a+b);

    if(a<0)
    {
        somax+=(-a);
    }
    else
    {
        somax+=a;
    }
    printf("La somma massima= %d",somax);
}