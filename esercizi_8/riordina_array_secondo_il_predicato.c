#include <stdio.h>

void stampa_array(int *a, int dim)
{ 
    printf("\n{");
    for(int i=0;i<dim;i++)
    {
        if(i==dim-1)
            printf("%d", *(a+i));
        else
            printf("%d,", *(a+i));
    }
    printf("}\n");
}

void scambia(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int *a, int dim,int k )
{
    int i=0;
    int j=dim-1;
    while(i<j)
    {
        if(a[i]>=k)
        {
            scambia(a+i,a+j);
            j--;
        }
        else
            i++;
    }
   
}

void main()
{
    int a[] = {1,3,9,-2,8,18};
    int dim=6;
    partition(a,dim,2);

    stampa_array(a,dim);
}
