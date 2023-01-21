#include <stdio.h>

int el_neg(int *a, int dim)
{
    int j=0;
    while(j<dim && a[j]%2==0)
        {
            j++;
        }
    return (j==dim);
}

int main()
{
    int array[5]={-24,-4,84,-8,4};

    if(el_neg(array,5)==0)
        printf("C'è almeno un elemento dispari\n");
    else
         printf("Tutto l'array contiene elementi pari\n");
    
    return(0);
}