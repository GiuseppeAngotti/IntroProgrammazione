#include <stdio.h>

double a_n(int n) 
{
    double prec=0.5;
    for(int i=2;i<=n;i++)
    {
        prec=(prec+1)/2;
    }
    return prec;
}

int main() 
{
    int n;
    printf("Inserire la posizione n-esima della successione: ");
    scanf("%d", &n);

    printf("Il termine %d della successione è: %lf\n",n,a_n(n));
    
    return(0);
 }