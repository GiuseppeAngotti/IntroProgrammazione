#include <stdio.h>

//SOLUZIONE NON CORRETTA
/*int nj_ric(int i, int j)
{
    if(i==j)
        return j;
    return(i+nj_ric(i+1,j));
}

int xab_ite(int a,int b, int n_j)
{
    int xab=0;

    for(int i=a;i<=b;i++)
    {
        xab+=n_j;
    }
    return xab;
}*/

//SOLUZIONE CORRETTA
int s1(int n)
{
    if(n == 1)
        return 1;
    return n + s1(n-1);   
}

int s2(int a, int b)
{    
    int s = 0;
    for(int i=a; i<=b; i++)
        s += s1(i);
    return s;   
}

int main()
{
    int n_j,i=0,j;
    int x_ab,a,b;
    
    do
    {
        printf("Inserire j maggiore o uguale di 0:");
        scanf("%d",&j);
    }while(j<i);

    //n_j=nj_ric(i,j);

    printf("Inserire a:");
    scanf("%d",&a);
    
    do
    {
        printf("Inserire b maggiore o uguale di a:");
        scanf("%d",&b);
    }while(b<a);

    /*x_ab=xab_ite(a,b,n_j);
    printf("Il risultato delle due sommatorie è: %d:",x_ab);*/

    printf("la sommatoria da a a b vale %d \n", s2(a, b));
    return(0);
}