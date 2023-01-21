//Si scriva una funzione che dati due array 𝑎 e 𝑏 di uguale dimensione 𝑛 ne calcoli il prodotto scalare
#include <stdio.h>

void riempi_array(int *a, int dim)
{
     for(int i=0;i<dim;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",a+i);
    }
}

int p_scalare(int v1[], int v2[], int dim)
{
    int p_s=0;
    for(int i=0;i<dim;i++)
    {
        p_s+=v1[i]*v2[i];
    }
    return p_s;
}

int main()
{
    int array_a[4];
    int array_b[4];
    riempi_array(array_a,4);
    riempi_array(array_b,4);

    printf("Il prodotto scalare è uguale: %d",p_scalare(array_a,array_b,4));
    
    return 0;
}