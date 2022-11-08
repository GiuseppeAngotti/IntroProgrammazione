#include <stdio.h>

int potenza_ite(int a, int b)
{
    int help=a;
    for(int i=1;i<b;i++)
    {
        help*=a;
    }
    return help;
}

int potenza_ric(int a, int b)
{
    if(b==0)
        return (1);
    else if(b==1)
        return a;
    else
    {
        return(a*potenza_ric(a,b-1));
    }
}

void test()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("La potenza di a elevato b è uguale a: %d\n",potenza_ric(i,j));
        }
    }
}

void main()
{
    int a,b,risultato;

    printf("Inserire il valore di a: ");
    scanf("%d",&a);

    do
    {
        printf("Inserire il valore di b: ");
        scanf("%d",&b);
    }while(b<0);

    /*risultato=potenza_ite(a,b); 
    if(risultato==0)
        printf("La potenza di a elevato b è uguale a: %d\n",1);
    else
        printf("La potenza di a elevato b è uguale a: %d\n",risultato);*/

    risultato=potenza_ric(a,b);
    printf("La potenza di a elevato b è uguale a: %d\n\n",risultato);

    test();
}