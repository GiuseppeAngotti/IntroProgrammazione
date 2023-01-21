/*Ho stravolto la traccia mettendo 2 array dove ogni elemento del primo array non doveva essere divisibile con ogni elemento del secondo aray eccetto quando i==j
*/

#include <stdio.h>
#include <stdlib.h>


int check(int x,int indice, int array[], int dim)
{
    int i=0;
    int c=0;
    while(i<dim && c>=0)
    {
        if(i!=indice)
        {
            if(x%array[i]!=0)
                c++;
            else
                c-=dim+1;
        }
        i++;
    }
    return (i==dim);
}

void check_and_copy(int *a, int b[], int dim)
{
    int *temp_array=(int *)malloc(sizeof(int)*dim);
    for (int i=0;i<dim;i++)
    {
        if(check(*(a+i),i, b, dim)!=0)
            temp_array[i]=*(a+i);
        else
            temp_array[i]=b[i];
    }
    for (int i=0;i<dim;i++)
    {
       b[i]=temp_array[i];
    }
    free(temp_array);
}

void stampa_array(int *a, int dim)
{
    printf("\n\n{");
    for(int i=0;i<dim;i++)
    {
        if(i==dim-1)
            printf("%d",*(a+i));
        else
            printf("%d,",*(a+i));
    }
    printf("}");
}

int main()
{
    int dim=5;
    int array_a[5]={11,8,7,10,9};
    int array_b[5]={2,3,7,5,6};

    stampa_array(array_a,dim);
    stampa_array(array_b,dim);

    check_and_copy(array_a,array_b,dim);
    stampa_array(array_b,dim);
    
    return 0;
}