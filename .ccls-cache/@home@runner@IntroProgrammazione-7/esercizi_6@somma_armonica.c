#include <stdio.h>

void somma_armonica(int n, double *h)
{
    if(n==1)
        *(h)=1;
    *(h+n)=*(h+n)+1/n+somma_armonica(n-1, h-1);






    
    printf("\nH(%f) è uguale a: %lf",n, somma_armonica(num, &p));
    
    if(n==1)
        return 3.0;
    return(f_ric(n-1)+3)/(2*n)+f_ric(n-2);
}

double f_ite(int n)
{
    double n_2=1,n_1=3,help; 
    if(n==0)
        return n_2;
    if(n==1)
        return n_1;
    for(int i=2;i<=n;i++)
    {
        help=(n_1+3)/(2*i)+n_2;
        n_2=n_1;
        n_1=help;
    }
    return help;
}

int main()
{
    int num;
    double *p;
    printf("Inserire n: ");
    scanf("%d",&num);

    somma_armonica(num, &p);
    
    return 0;
}