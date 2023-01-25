#include <stdio.h>
#include <stdlib.h>

void riempi_array(int *a,int dim)
{
    for(int i=0;i<dim;i++)
    {
        printf("array[%d]= ",i);
        scanf("%d",(a+i));
    }
}

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

int cerca_max(int *a,int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

void scambia(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void riordina_array(int* a, int dim)
{
    int j=0; 
    for(int i=1;i<dim;i+=2)
    {
        while(j<dim && j<i+2 && *(a+i)> *(a+j))
        {
            scambia((a+j),(a+i));
            j+=2;
        }
        if(j>i+2)
            j-=2;
    }
}

int main()
{
    int *a;
    int dim;
    printf("Inserire la dimensione dell'array: ");
    scanf("%d",&dim);

    a=(int*)malloc(dim * sizeof(int));

    riempi_array(a,dim);
    stampa_array(a,dim);

    
    riordina_array(a,dim);
    stampa_array(a,dim);

    
    free(a);
    return 0;
}