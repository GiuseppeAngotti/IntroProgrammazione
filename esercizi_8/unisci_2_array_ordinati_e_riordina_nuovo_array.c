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

int* unisci_array_e_riordinali(int *a, int n, int *b, int m)
{
    int* n_m=(int*)malloc((n+m)*sizeof(int));
    for(int i=0;i<n;i++)
    {
        n_m[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        n_m[i+n]=b[i];
    }

    int j;
    int temp;
    for(int i=0;i<n+m;i++)
    {
        temp=n_m[i];
        j=i-1;
        while(j>=0 && n_m[j]>temp)
        {
            n_m[j+1]=n_m[j];
            j--;
        }
        n_m[j+1]=temp;
    }
    stampa_array(n_m,n+m);
    return n_m;
}

int main()
{
    int *a;
    int *b;
    int dim_a,dim_b;
    int *n_m;

    printf("Inserire la dimensione dell'array a: ");
    scanf("%d",&dim_a);

    a=(int*)malloc(dim_a * sizeof(int));

    printf("Inserire la dimensione dell'array b: ");
    scanf("%d",&dim_b);

    b=(int*)malloc(dim_b * sizeof(int));

    riempi_array(a,dim_a);
    riempi_array(b,dim_b);
    stampa_array(a,dim_a);
    stampa_array(b,dim_b);

    n_m=unisci_array_e_riordinali(a,dim_a,b,dim_b);

    free(a);
    free(b);
    free(n_m);
    return 0;
}