#include <stdio.h>

int check(int a[], int dim, int k)
{
    int trovato=0;
    int i=0;
    while(i<dim && !trovato)
    {
        if(a[i]+a[i+1]+a[i+2]==k)
            trovato=1;
        i++;
    }
    return(trovato);
}

int main()
{
    int dim=6;
    int array[6]={8,43,0,27,15,3};
    int k;

    printf("Inserire un valore: ");
    scanf("%d",&k);

    if(check(array,dim,k)==0)
        printf("\nNon c'è nessun valore nell'array pari alla somma di 3 elementi consecutivi che sia uguale a k\n");
    else
         printf("\nEsiste un valore formato dalla somma di 3 elementi consecutivi uguale a k\n");
    return 0;
}