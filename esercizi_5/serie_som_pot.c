#include <stdio.h>

int p_ite(int n, int k)
{
    int help=1;
    for(int i=1;i<=n;i++)
    {
        help*=k;
    }
    return help;
}

int p_ric(int n, int k)
{
    if(n==0)
        return 1;
    return(k*p_ric(n-1,k));  
}

double s_ite(int n, int k)
{
    double somma=0;
    for(int i=1;i<=n;i++)
    {
        somma+=(double)(i*p_ite(i+1,k))/p_ite(i,3);
    }
    return somma;
}

double s_ric(int n, int k)
{
    if(n==1)
        return (double)(k*k)/3;
    return((double)(n*p_ric(n+1,k))/(p_ric(n,3))+s_ric(n-1,k));
}

int main()
{
    int n, k;
    double risultato_ite, risultato_ric;
    
    printf("Inserire fino a quale elemento n voglio arrivare nella mia serie: ");
    scanf("%d",&n);
    printf("Inserire la costante k: ");
    scanf("%d",&k);

    risultato_ite=s_ite(n,k);
    risultato_ric=s_ric(n,k);

    printf("L'elemento %d della mia serie è:\nPer la funzione iterativa: %lf\nPer la funzione ricorsiva: %lf",n,risultato_ite,risultato_ric);
    
    return 0;
}