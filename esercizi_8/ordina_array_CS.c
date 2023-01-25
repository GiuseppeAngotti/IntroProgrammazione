//COUNTING SORT: algoritmo di riordinamento 

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

void counting_sort(int *a, int n)
{
    int max=cerca_max(a,n);
    int dim=max+1;
    int conta=0;
    int *c;
    int j=0;
    c=(int*)malloc(dim * sizeof(int));
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==a[j])
                conta++;
        }
        c[i]=conta;
        conta=0;
    }
    for(int i=0;i<dim;i++)
    {
        if(c[i]>0)
        {
            while(j<n && c[i]>0)
            {
                a[j]=i;
                c[i]-=1;
                j++;              
            }  
        }
    }
    stampa_array(a,n);
    free(c);
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


    counting_sort(a,dim);
    free(a);
    return 0;
}