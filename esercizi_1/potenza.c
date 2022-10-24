#include <stdio.h>

void main()
{
    int a,b;

    printf("Inserire il valore di a: ");
    scanf("%d",&a);

    int help=a;

    do
    {
        printf("Inserire il valore di b: ");
        scanf("%d",&b);
    }while(b<0);

    for(int i=1;i<b;i++)
    {
        help*=a;
    }
    if(b==0)
        printf("La potenza di a elevato b è uguale a: %d",1);
    else
        printf("La potenza di a elevato b è uguale a: %d",help);
}