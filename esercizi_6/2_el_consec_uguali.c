#include <stdio.h>

int el_pari(int *a, int dim)
{
    int trovati=0;
    int j=0;
    while(j<dim-1 && trovati==0)
        {
            if(a[j]==a[j+1])
                trovati++;
            j++;
        }
    return (trovati);
}

int main()
{
    int array[5]={23,1,85,7,7};

    if(el_pari(array,5)==0)
        printf("Non ci sono elementi consecutivi uguali\n");
    else
         printf("Ci sono almeno due elementi consecutivi uguali\n");
    
    return(0);
}