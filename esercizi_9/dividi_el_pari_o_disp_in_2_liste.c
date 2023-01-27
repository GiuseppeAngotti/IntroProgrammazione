#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int valore;
    int* successivo;
}elemento;

typedef elemento* puntatore;

void main(void)
{
    int x;
    int p=0;
    int d=0;

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

    attuale_pari=testa_pari;
    attuale_dispari=testa_dispari;

    while(attuale_pari!=NULL)
    {
        printf("%d -> ",attuale_pari->valore);
        attuale_pari=(*attuale_pari).successivo;
    }
    printf("\b\b\b    \n");
    
    while(attuale_dispari!=NULL)
    {
        printf("%d -> ",(*attuale_dispari).valore);
        attuale_dispari = attuale_dispari->successivo;
    }
    printf("\b\b\b    \n");
}