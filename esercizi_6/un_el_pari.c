#include <stdio.h>

int el_pari(int *a, int dim)
{
    int trovato=0;
    int j=0;
    while(j<dim && trovato==0)
        {
            if(a[j]%2==0)
                trovato++;
            j++;
        }
    return (trovato);
}

int main()
{
    int array[5]={23,1,85,3,7};

    if(el_pari(array,5)==0)
        printf("Non c'è nessun elemento pari\n");
    else
         printf("C'è almeno un elemento pari\n");
    
    return(0);
}