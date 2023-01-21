#include <stdio.h>

void riempi_array(int *a, int dim)
{
     for(int i=0;i<dim;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",a+i);
    }
}


int somma_el_array(int *a, int dim)
{
    if(dim==1)
        return *a;
    return(*(a+dim-1)+somma_el_array(a, dim-1));
    
}

int pred(int *a,int *b, int n, int m)
{
    int el_da_contr=somma_el_array(b,m);

    int i=0, trovato=0;
    while(i<n && !trovato)
    {
        if(*(a+i)==el_da_contr)
            trovato=1;
        i++;
    }
    return (trovato);
}

int  main()
{
    int n=4, m=2;
    int array_a[4];
    int array_b[2];
    riempi_array(array_a,n);
    riempi_array(array_b,m);

    int esiste=pred(array_a, array_b, n, m);
    if(esiste==0)
        printf("Non c'è alcun elemento dell'array 1 che è uguale alla somma degli elementi dell'array 2");
    else
        printf("C'è almeno un elemento dell'array 1 che è uguale alla somma degli elementi dell'array 2");
    return 0;
}