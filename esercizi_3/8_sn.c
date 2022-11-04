#include <stdio.h>

void s_n(int n) 
{
    double an,sn;
    for(int i=0;i<=n;i++)
    {
        an=1./((2*i+1)*(2*i+1));
        sn+=an;
        printf("s(%d)= %lf\n",i,sn);
    }
}

int main() 
{
    int n;
    double p,an;
    printf("Inserire fino a quale elemento n voglio sommare nella mia serie: ");
    scanf("%d", &n);

    s_n(n);
    
    return(0);
 }