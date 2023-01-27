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

puntatore crea_lista()
{
    puntatore testa;
    puntatore attuale;
    int n;
    printf("Inserire il numero di elementi della lista: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        printf("Inserire valore: ");
        if(i==0)
        {
            attuale=malloc(sizeof(elemento));
            scanf("%d", &attuale->valore);
            testa=attuale;
        }
        else
        {
            attuale=attuale->successivo=malloc(sizeof(elemento));
            scanf("%d", &attuale->valore);
        }
    }
    attuale->successivo=NULL;
    return testa;
}

int dim_lista(puntatore a)
{
    if (a==NULL)
        return 0;
    return (1+dim_lista(a->successivo));
}

puntatore unisci_liste(puntatore a,puntatore b, int j)
{
    int n=dim_lista(a);
    puntatore testa;
    puntatore temp;
    
    if(j<=0)
    {
        testa=b;
        while(b->successivo!=NULL)
            b=b->successivo;
        b->successivo=a;
    }
    if(j>=n)
    {
        testa=a;
        while(a->successivo!=NULL)
            a=a->successivo;
        a->successivo=b;
    }
    else
    {
        testa=a;
        for(int i=1;i<n;i++)
        {
            if(i==j)
            {
                temp=a->successivo;
                a->successivo=b;
                while(b->successivo!=NULL)
                    b=b->successivo;
            }
            if(i>j)
                b->successivo=temp;
            else
                a=a->successivo;
        }
    }
    
    return testa;
}

void main(void)
{
    puntatore a=crea_lista();
    puntatore b=crea_lista();

    int j;
    printf("Inserire j: ");
    scanf("%d", &j);

    stampa_lista_ite(a);
    stampa_lista_ite(b);

    puntatore c=unisci_liste(a,b,j);
    stampa_lista_ite(c);

}