#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int valore;
    int* successivo;
}elemento;

typedef elemento* puntatore;

int dim_lista(puntatore a)
{
    if(a==NULL)
        return 0;
    return 1+dim_lista(a);
}

void stampa_lista(puntatore a)
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
    int n;
    printf("Inserire la lunghezza della lista: ");
    scanf("%d",&n);
    puntatore attuale;
    
    for(int i=0;i<n;i++)
    {
        printf("Inserire un valore: ");
        if(i==0)
        {
            attuale=malloc(sizeof(elemento));
            scanf("%d",&attuale->valore);
            testa=attuale;
        }
        else
        {
            attuale=attuale->successivo=malloc(sizeof(elemento));
            scanf("%d",&attuale->valore);
        }
    }
    attuale->successivo=NULL;
    return testa;
}

int s_min(puntatore a, int k)
{
    int val=a->valore;
    int min_prec=k;
    int min_ora;
    int n=dim_lista(a);
    printf("%d",n);
    for(int i=0;i<n;i++)
    {
        if(k>= a->valore )
        {
            min_ora=k-a->valore;
            if(min_prec > min_ora)
            {
                min_prec=min_ora;
                val=a->valore;
            }
        }
        a=a->successivo;
    }
    
    return val;
}

puntatore inserisci_elemento(puntatore a,int k)
{
    printf("sono dentro inserisci elemento");
    puntatore testa;
    puntatore attuale;
    puntatore temp;
    int minimo_k=s_min(a,k);
    /*while(i<n)
    {
        if(attuale->valore => k)
        {
            temp=attuale->successivo;
            attuale=attuale->successivo=malloc(sizeof(elemento));
            attuale->valore=k;
            attuale->successivo=temp;
        }
        else
            attuale=attuale->successivo;
    }
    */
    return testa;
}

void main(void)
{
    puntatore a=crea_lista();
    stampa_lista(a);

    int k;

    printf("Inserire valore da inserire nella lista: ");
    scanf("%d",&k);

    k=s_min(a,k);
    a=inserisci_elemento(a,k);
    stampa_lista(a);
}