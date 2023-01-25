#include <stdio.h>
#include <stdlib.h>

void riempi_array(int *a,int dim)
{
    for(int i=0;i<dim;i++)
    {
        printf("a[%d]= ",i);
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

int check(int a[], int n)
{
    for(int j = 0; j < n; j++)
    {
        int verifica = 1;
        for(int i = 0; i <= j; i++)
        {
            if(a[i] > j)
                verifica = 0;
        }
        for(int i = j + 1; i < n; i++)
        {
            if(a[i] <= j)
                verifica = 0;
        }
        if(verifica == 1)
        return 1;
    }
    return 0;
}

int main()
{
    int *a;
    int dim;

    printf("Inserire la dimensione dell'array: ");
    scanf("%d",&dim);

    a=(int*)malloc(dim * sizeof(int));

    int k;

    printf("Inserire un valore: ");
    scanf("%d",&k);

    riempi_array(a,dim);
    stampa_array(a,dim);

    if(check(a,dim,k)==0)
        printf("Non esiste un j capace di tale.");
    else
         printf("Esiste un j capace di soddisfare tutti predicati!");
    
    return 0;
}