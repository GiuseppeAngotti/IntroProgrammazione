#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int valore;
    int* successivo;
}elemento;

typedef elemento* puntatore;

int dim_lista(puntatore navicella)
{
    int dim=0;
    
    while(navicella!=NULL)
    {
        dim++;
        navicella=(*navicella).successivo;
    }
    return dim;
}
int sum_el_lista(puntatore navicella)
{
    int somma=0;
    while(navicella!=NULL)
    {
        somma+=(*navicella).valore;
        navicella=(*navicella).successivo;
    }
    return somma;
}

void main(void)
{
    int x;
    int p=0;
    int d=0;
    int dim_pari;
    int dim_disp;
    int somma_pari;
    int somma_disp;
    

    puntatore testa_pari;
    puntatore testa_dispari;
    puntatore attuale_pari;
    puntatore attuale_dispari;
    do
    {
        printf("Inserire un elemento: ");
        scanf("%d",&x);
        if(x%2==0)
        {
            if(p==0)
            {
                attuale_pari=malloc(sizeof(elemento));
                testa_pari=attuale_pari;
                (*attuale_pari).valore=x;
                p++;
            }
            else
            {
                attuale_pari->successivo=malloc(sizeof(elemento));
                attuale_pari= attuale_pari->successivo;
                attuale_pari->valore=x;
                p++;
            }
        }
        else
        {
            if(d==0)
            {
                attuale_dispari=malloc(sizeof(elemento));
                testa_dispari=attuale_dispari;
                (*attuale_dispari).valore=x;
                d++;
            }
            else
            {    
                attuale_dispari=attuale_dispari->successivo=malloc(sizeof(elemento));
                attuale_dispari->valore=x;
                d++;
            }
        }
    }while(x>=0);
    attuale_pari->successivo=NULL;
    attuale_dispari->successivo=NULL;

    dim_disp=dim_lista(testa_dispari);
    dim_pari=dim_lista(testa_pari);

    somma_disp=sum_el_lista(testa_dispari);
    somma_pari=sum_el_lista(testa_pari);
    
    attuale_pari=testa_pari;
    attuale_dispari=testa_dispari;

    if(dim_disp > dim_pari)
    {
         while(attuale_dispari!=NULL)
        {
            printf("%d -> ",(*attuale_dispari).valore);
            attuale_dispari = attuale_dispari->successivo;
        }
        printf("\b\b\b    \n");
    }
    if(dim_disp < dim_pari)
    {
        while(attuale_pari!=NULL)
        {
            printf("%d -> ",attuale_pari->valore);
            attuale_pari=(*attuale_pari).successivo;
        }
        printf("\b\b\b    \n");
    }
    printf("\nQuesta è la somma dei dispari: %d",somma_disp);
    printf("\nQuesta è la somma dei pari: %d\n",somma_pari);
}