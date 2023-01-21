//BINARY SEARCH (anche detto B-SEARCH) è un algoritmo che serve a cercare un elemento all'interno di un'array GIA' ORDINATO

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

int cerca_elemento_ite(int *a, int from, int to, int x)
{
    while(from<=to)
    {
        int med = (from + to)/2;
        if (x == a[med])
            return med;

        // x is on the right side
        else if (x > a[med]) 
            from = med + 1;

        // x is on the left side
        else                 
            to = med - 1;
    }
    return -1;
}

int cerca_elemento_ric(int *a, int from, int to, int x)
{
   if(from > to)
       return -1;
    else
   {
        int med=(from+to)/2;
        if(x == *(a+med))
            return med;

        //x is on the right side    
        else if(x > *(a+med))       
            return cerca_elemento_ric(a, med + 1, to, x);

        // x is on the left side
        else
            return cerca_elemento_ric(a, from, med - 1, x);
       
   }
}

int main()
{
    int* a;
    int dim;
    
    printf("Inserire una dimensione: ");
    scanf("%d",&dim);

    a=(int *)malloc(dim * sizeof(int));
    
    riempi_array(a,dim);

    stampa_array(a, dim);

    int from,to,x;

    printf("\nInserire un valore corrispondente a un indice da cui partire: ");
    scanf("\n%d",&from);
    printf("\nInserire un valore corrispondente a un indice fino a dove arrivare: ");
    scanf("\n%d",&to);

    printf("\nInserire un valore da cercare: ");
    scanf("%d",&x);

    int risultato=cerca_elemento_ite(a, from, to, x);
    if(risultato!=-1)
        printf("Ho trovato il tuo valore! Si trova all'indice: %d", risultato);
    else
        printf("Mi dispiace,non ho trovato il tuo valore!");
    free(a);
    
    return 0;
}