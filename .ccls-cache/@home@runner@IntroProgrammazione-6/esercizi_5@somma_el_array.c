#include <stdio.h>

int somma(int v[], int dim)
{
    int t=0;
    for(int i=0;i<dim;i++)
    {
        t+=v[i];
    }
    return t;
}

int main()
{
    int a[3]={1,4,5};
    int s=somma(a,3);
    printf("La somma di tutti gli elementi dell'array è: %d",s);
    return 0;
}