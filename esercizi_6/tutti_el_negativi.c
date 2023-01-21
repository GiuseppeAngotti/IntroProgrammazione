#include <stdio.h>

int el_neg(int *a, int dim)
{
    int j=0;
    while(j<dim && a[j]<0)
        {
            j++;
        }
    return (j==dim);
}

int main()
{
    int array[5]={-23,-4,-84,-3,-4};

    if(el_neg(array,5)==0)
        printf("C'è almeno un elemento positivo\n");
    else
         printf("Tutto l'array contiene elementi negativi\n");
    
    return(0);
}