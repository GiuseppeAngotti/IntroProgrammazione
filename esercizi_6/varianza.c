#include <stdio.h>

void riempi_array(int* p, int dim)
{
    for(int i=0;i<dim;i++)
    {
        printf("Inserire il valore %d: ",i+1);
        scanf("%d",p+i);
    }
}

float somma_el_array(int somma,int *a, int dim)
{
    if(dim==0)
    {
        somma=*a;
    }
    else
    {
        somma+=*(a+(dim-1))+somma_el_array(somma,a, dim-1);
        return somma;
    }
}

float f_media(float sum, int n)
{   
    return (sum/n);
}

float var(int a[], int n,float media)
{
    float varianza=1;
    float num=0;
    for(int i=n;i>0;i--)
    {
        num+=(a[i-1] - media)*(a[i-1] - media);
    }
    varianza=num/n;
    return varianza;
}
int main()
{
    int a[5];
    riempi_array(&a[0], 5);

    float somma=0;
    somma=somma_el_array(somma,a,5);

    float media=f_media(somma,5);

    float varianza=var(a, 5,media);
    
    printf("La varianza degli elementi contenuti nell'array è: %f\n",varianza);


    
    return 0;
}