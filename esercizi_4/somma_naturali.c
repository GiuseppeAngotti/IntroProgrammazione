#include <stdio.h>

int somma_ite(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}

int somma_esatta(int n)
{
   int s=(n*(n+1))/2;
    return s;
}

int somma_ric(int n)
{
    if(n==1)
        return (1);
    else
    {
        return(n+somma_ric(n-1));
    }
}

void test()
{
    for(int i=1;i<=100;i++)
    {
        if(somma_ric(i)==somma_ite(i) && somma_ric(i)==somma_esatta(i))
        {
            if(i==100)
            printf("Le tre funzioni danno lo stesso risultato sempre: vero\n");
        }
        else
        {
            if(i==100)
             printf("Le tre funzioni danno lo stesso risultato sempre: falso\n");
        }
    }
}

void main()
{
    int n;

    do
    {
        printf("Inserire n maggiore di 0: ");
        scanf("%d",&n);
    }while(n<0);

    printf("Somma ricorsivo/iterativo/esatta: %d/%d/%d\n",somma_ric(n),somma_ite(n),somma_esatta(n));
    
    test();
}