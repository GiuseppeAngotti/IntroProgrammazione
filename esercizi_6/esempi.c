#include <stdio.h>

int tuttipari(int a[], int dim)
{
int pari =1;
    for(int i=0;i<dim;i++)
    {
        if(a[i]%2==0)
            pari*=1;
        else
            pari*=0;
    }
    return pari;
}
int main()
{
    int array[5]={-2,-5,84,-8,4};

    if(tuttipari(array,5)==0)
        printf("C'è almeno un elemento dispari\n");
    else
         printf("Tutto l'array contiene elementi pari\n");
    
    return(0);
}