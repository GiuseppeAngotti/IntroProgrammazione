#include <stdio.h>

double f_ric(int n)
{
    if(n==0)
        return 1.0;
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
    int n;
    printf("Inserire n: ");
    scanf("%d",&n);

    printf("s_%d ricorsiva è uguale a: %lf",n, f_ric(n));
    printf("\ns_%d iterativa è uguale a: %lf",n, f_ite(n));
    return 0;
}