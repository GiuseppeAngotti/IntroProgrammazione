#include <stdio.h>

int el_neg(int *a, int dim)
{
    int j=0;
    while(j<dim-1 && a[j]==a[j+1])
        {
            j++;
        }
    return (j==dim-1);
}

int main()
{
    int array[5]={-24,-24,-24,-24,-24};

    if(el_neg(array,5)==0)
        printf("C'è almeno un elemento diverso da un altro\n");
    else
         printf("Tutto l'array contiene elementi uguali\n");
    
    return(0);
}