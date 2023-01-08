#include <stdio.h>

int decr(int a[], int dim)
{
    int i=0;
    while(i<dim-1 && a[i]>a[i+1])
        i++;
    return(i==dim-1);
}

//soluzione del professore
/*
int g_then(int a[], int n, int x)
{
    int i=0;
    while(i<n && a[i]<x)
        i++;
    return(i==n);
}
int fun(int a[], int n)
{
    int i=1;
    while(i<n && !g_then(a, i, a[i]))
        i++;
    return(i==n);
}*/

int main()
{
    int a[5]={6,5,3,7};

    int ris;
    ris=decr(a,4);

    //prof
    //ris=fun(a,3);
    if(ris==0)
        printf("Il mio array non è decrescente");
    else
        printf("Il mio array è decrescente");
    return 0;
}