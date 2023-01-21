#include <stdio.h>
#include <stdlib.h>

//ci sarebbe anche la formula algebrica (n*(n+1))/2

int calcolo_triangolare(int *a,int dim)
{
    if(dim==1)
        return(*a=1);
    return(*(a+dim-1)=dim+calcolo_triangolare(a,dim-1));
}

int main()
{
    int dim;
    printf("Quanti numeri triangolari vuoi avere?\n");
    scanf("%d",&dim);
    int* array=(int*)malloc(dim * sizeof(int));

    
    calcolo_triangolare(array,dim);
    
    for(int i=dim-1;i!=0;i--)
        printf("a[%d]= %d\n",i,array[i]);

    free(array);
    
    return 0;
}