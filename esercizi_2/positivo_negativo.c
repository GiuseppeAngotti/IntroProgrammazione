#include <stdio.h>

void main()
{
    float x;

    printf("Inserire x: ");
    scanf("%f",&x);

    if(x<0)
    {
        printf("%.2f è negativo",x);
        printf("\nValore assoluto: %f",-x);
    }
    else
    {
        printf("%.2f è positivo",x);
        printf("\nValore assoluto: %f",x);
    }
}