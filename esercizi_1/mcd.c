#include <stdio.h>

void main()
{
    int x,y;
    do
    {
        printf("Inserire un numero: ");
        scanf("%d",&y);
    }while(y<0);
    do
    {
        printf("Inserire un numero: ");
        scanf("%d",&x);
    }while(x<0);
    while(x!=y)
    {
        if(x>y)
            x-=y;
        else
            y-=x;
    }
    printf("Il massimo comun divisore è: %d\n",x);
}