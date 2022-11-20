#include <stdio.h>

int sn(int n)
{
    if(n == 0)
        return 1;
    return 2* sn(n-1);   
}

double xab(int a, int b)
{    
    double s = 1;
    for(int i=a; i<=b/2; i++)
        s *= sn(i)/a;
    s-=b;
    return s;   
}

int main()
{
    int s_n,n;
    double x_ab;
    int a,b;
    
    do
    {
        printf("Inserire n maggiore o uguale di 0:");
        scanf("%d",&n);
    }while(n<0);

    s_n= sn(n);
     printf("la sommatoria da a a b vale %d \n", s_n);
    
    printf("Inserire a:");
    scanf("%d",&a);
    
    do
    {
        printf("Inserire b maggiore o uguale di a:");
        scanf("%d",&b);
    }while(b<a);

    x_ab= xab(a,b);
    
    printf("la sommatoria da a a b vale %lf \n", x_ab);
    return(0);
}