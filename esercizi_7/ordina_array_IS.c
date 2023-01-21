// INSERTION SORT: è un algoritmo di ordinamento

#include <stdio.h>
#include <stdlib.h>

void riempi_array(int *a, int dim)
{
    for(int i=0;i<dim;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}

void stampa_array(int *a, int dim)
{ 
    printf("\n{");
    for(int i=0;i<dim;i++)
    {
        if(i==dim-1)
            printf("%d", *(a+i));
        else
            printf("%d,", *(a+i));
    }
    printf("}\n");
}


void ordina_array_cresc(int *a, int dim)
{
    int temp;
    int j;
    for(int i=1;i<dim;i++)
    { 
        printf("\ni: %d",i);
        temp=a[i];
        printf("\nTemp: %d",temp);
        j=i-1;
        printf("\nj: %d",j);
        printf("\n%d>%d?",a[j],temp);
        while(j>=0 && a[j]>temp)
        {
            printf("\nSI");
    		a[j+1]=a[j];
            printf("\na[j+1]: %d",a[j+1]);
    		j--;
            printf("\nj: %d",j);
	    }
    	a[j+1]=temp;
        printf("\na[j+1]: %d",a[j+1]);
        stampa_array(a, dim);
	}
	
}

int main()
{
    int* a;
    int dim;
    
    printf("Inserire una dimensione: ");
    scanf("%d",&dim);

    a=malloc(dim * sizeof(int));

    riempi_array(a,dim);

    stampa_array(a, dim);

    ordina_array_cresc(a, dim);

    stampa_array(a, dim);

    free(a);
    
    return 0;
}