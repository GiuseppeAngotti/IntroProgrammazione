// SELECTION SORT: algoritmo di ordinamento

#include <stdio.h>
#include <stdlib.h>

void riempi_array(int *a, int dim)
{
    for(int i=0;i<dim;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
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

void ordina_array_cresc(int *a, int dim)
{
    int t,min;
    for(int i=0;i<dim;i++)
    {
        min=i;
        for(int j=i+1;j<dim;j++)
        {
            if(*(a+j)< *(a+min))
                min=j;
        }
        t=*(a+min);
        *(a+min)= *(a+i);
        *(a+i)=t;
    }
}

int main()
{
    int* a;
    int dim;
    
    printf("Inserire una dimensione: ");
    scanf("%d",&dim);

    a=malloc(dim * sizeof(int));

    riempi_array(a,dim);

    stampa_array(a, dim);

    ordina_array_cresc(a, dim);

    stampa_array(a, dim);

    free(a);
    
    return 0;
}