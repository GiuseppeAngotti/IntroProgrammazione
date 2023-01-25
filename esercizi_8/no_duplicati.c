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

int * crea_array_senza_duplicati(int *a,int dim)
{
    int c=0;
    int neo_dim=0;
    for(int i=0;i<dim;i++)
    {
        int differente=1;
        for(int j=i-1;j>=0;j--)
        {
            if(*(a+j)== *(a+i))
                differente=0;
        }
        if(differente==1)
        {
            neo_dim++;
        }
    }
    int *p=(int*)malloc(neo_dim * sizeof(int));;
    for(int i=0;i<dim;i++)
    {
        int differente=1;
        for(int j=i-1;j>=0;j--)
        {
            if(*(a+j)== *(a+i))
                differente=0;
        }
        if(differente==1)
        {
            *(p+c)=*(a+i);
            c++;
        }
    }
    stampa_array(p,neo_dim);  
    return p;
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

    int *p = crea_array_senza_duplicati(a,dim);

    free(a);
    free(p);
    
    return 0;
}