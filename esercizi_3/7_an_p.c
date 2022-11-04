#include <stdio.h>
#include <math.h>

double a_n(int n, double p) 
{
    double an=p;
    for(int i=2;i<=n;i++)
    {
        an=0.5*(an+p/an);
    }
    return an;
}

int main() 
{
    int n;
    double p,an;
    printf("Inserire la posizione n-esima della successione: ");
    scanf("%d", &n);
    printf("Inserire il primo termine (p) della successione: ");
    scanf("%lf", &p);
    
    an=a_n(n,p);
    printf("Il termine %d della successione è: %lf\n",n,an);
    return(0);
 }