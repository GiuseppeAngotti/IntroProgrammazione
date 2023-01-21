#include <stdio.h>

void riempi_array(int *a, int dim)
{
    for(int i=0;i<dim;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",a+i);
    }
}
int check_pari(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}

int somma_pari(int *a, int dim)
{
    int somma=0;
    for(int i=0;i<dim;i++)
        {
            if(check_pari(a[i]))
                somma+=a[i];
        }
    return (somma);
}

int main()
{
    int array[5];

    riempi_array(array,5);

    int sum_pari= somma_pari(array,5);
       
    printf("La somma degli elementi pari è: %d\n",sum_pari);
    
    return(0);
}