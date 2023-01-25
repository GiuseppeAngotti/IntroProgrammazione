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

void scambia(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void riordina_array(int* a, int dim,int k)
{
    int temp;
    if(k<0)
    {
        k*=-1;
        for(int i=0;i<k;i++)
        {
            temp=*a;
            for(int j=0;j<dim;j++)
            {
                *(a+j)=*(a+j+1);
                if(j==dim-1)
                    *(a+j)=temp;
            }
        }
    }
    if(k>0)
    {
        for(int i=k;i>0;i--)
        {
            temp=*(a+dim-1);
            for(int j=dim-2;j>=0;j--)
            {
                *(a+j+1)=*(a+j);
                if(j==0)
                    *(a+j)=temp;
            }
        }
    }
}

int main()
{
    int *a;
    int dim;
    int k;
    printf("Inserire di quanto ruotare l'array: ");
    scanf("%d",&k);
    
    printf("Inserire la dimensione dell'array: ");
    scanf("%d",&dim);

    a=(int*)malloc(dim * sizeof(int));

    riempi_array(a,dim);
    stampa_array(a,dim);

    
    riordina_array(a,dim,k);
    stampa_array(a,dim);

    
    free(a);
    return 0;
}