#include <stdio.h>

int fattoriale(int x)
{
    int f=1;
    for(int i=x;i!=0;i--)
    {
        f*=i;
    }   
    return f;
}

void main()
{
    int n,k,c;
    
    printf("Inserire n: ");
    scanf("%d",&n);

    printf("Inserire k: ");
    scanf("%d",&k);

    if(n>=k)
    {
        c=fattoriale(n)/(fattoriale(k)*fattoriale(n-k));
    }
    else
    {
        c=0;
    }
    printf("Coefficenti binomiale di %d su %d è: %d",n,k,c);
}