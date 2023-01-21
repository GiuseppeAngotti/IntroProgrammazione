#include <stdio.h>

int el_neg(int *a, int dim)
{
    int trovato=0;
    int j=0;
    while(j<dim && trovato==0)
        {
            if(a[j]<0)
                trovato++;
            j++;
        }
    return (trovato);
}

int main()
{
    int array[5]={23,4,84,3,4};

    if(el_neg(array,5)==0)
        printf("Non c'è nessun elemento negativo\n");
    else
         printf("C'è almeno un elemento negativo\n");
    
    return(0);
}