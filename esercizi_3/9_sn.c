#include <stdio.h>
#include <math.h>

void s_n(int n, int k) 
{
    double an,sn;
    for(int i=1;i<=n;i++)
    {
        an=(i*pow(k,i+1))/pow(3,i);
        sn+=an;
        printf("s(%d)= %lf\n",i,sn);
    }
}

int main() 
{
    int n;
    double k,an;
    printf("Inserire fino a quale elemento n voglio sommare nella mia serie: ");
    scanf("%d", &n);
    printf("Inserire la variabile k della serie: ");
    scanf("%lf", &k);

    s_n(n,k);
    
    return(0);
 }