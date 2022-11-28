#include <stdio.h>

int primo_ite(int n)
{
    int ris=1; 
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return ris=0;
        }
    }
    return ris;
}

int f_ric(int k,int n)
{
    if(k>n)
        return 0;
    return(n*primo_ite(n)+f_ric(k,n-1));
}


int main()
{
    int x,n,k,ris;
    printf("Inserire x per vedere se è primo: ");
    scanf("%d",&x);
    
    printf("Inserire ilnumero n fino a dove si vuole arivare nella serie: ");
    scanf("%d",&n);
    printf("Inserire k maggiore di n (il valore di partenza della serie): ");
    scanf("%d",&k);

    ris=primo_ite(x);
    if(ris==1)
        printf("%d è un numero primo",x);
    else
        printf("%d NON è un numero primo",x);
    
    printf("\nIl risultato della somma è la somma dei numeri primi fino a %d ed è uguale a: %d",n, f_ric(k,n));
    return 0;
}