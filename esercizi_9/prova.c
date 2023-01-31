/*Stavo cercando di creare una lista di elementi di array
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int* array;
    int dim;
    struct nodo *successivo;
}elemento;

typedef elemento* puntatore;

void riempi_array(int *a,int dim)
{
    for(int i=0;i<dim;i++)
    {
        printf("array[%d]= ",i);
        scanf("%d",(a+i));
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

void main(void)
{
    puntatore testa;
    int n;
    printf("Inserire il numero di elementi della lista: ");
    scanf("%d", &n);
    puntatore attuale;

    for(int i=0;i;i++)
    {
        if(i==0)
        {
            attuale=malloc(sizeof(elemento));
            testa=attuale;
        }
        printf("Inserire la dimensione dell'array: ");
        scanf("%d", &n);
        riempi_array(attuale->array,n);
        attuale->dim=n;
        (*attuale).successivo=malloc(sizeof(elemento));
        attuale = (*attuale).successivo;
    }
    attuale->successivo=NULL;

    attuale=testa;

    while(attuale!=NULL)
    {
        printf("%p -> ",attuale->array);
        attuale->successivo;
    }
    printf("\b\b\b    \n");
}