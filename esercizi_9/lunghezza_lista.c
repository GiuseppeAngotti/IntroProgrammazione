#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int valore;
    int* successivo;
}elemento;

typedef elemento* puntatore;

void stampa_lista_ite(puntatore a)
{
    while(a!=NULL)
    {
        printf("%d -> ",a->valore);
        a=a->successivo;
    }
    printf("\b\b\b    \n");
}

void stampa_lista_ric(puntatore a)
{
    if(a==NULL)
        return;
    printf("%d -> ",a->valore);
    stampa_lista_ric(a->successivo);
}

int dim_lista(puntatore a)
{
    if (a==NULL)
        return 0;
    return (1+dim_lista(a->successivo));
}

puntatore crea_lista(void)
{
    int x;
    int i=0;
    puntatore testa;
    puntatore attuale;
    do
    {
        printf("Inserire valore: ");
        scanf("%d",&x);
        if(x!=-1)
        {
            if(i==0)
            {
                attuale=malloc(sizeof(elemento));
                attuale->valore=x;
                testa=attuale;
                i++;
            }
            else
            {
                attuale = attuale->successivo = malloc(sizeof(elemento));
                attuale->valore=x;
            }
        }
        else
            attuale->successivo=NULL;
    }while(x!=-1);

    return testa;
}

void main(void)
{
    puntatore a=crea_lista();

    stampa_lista_ite(a);

    printf("La lista ha una dimensione di: %d",dim_lista(a));
}