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

puntatore ordina_lista(puntatore a)
{
    puntatore testa;
    puntatore attuale=a;
    puntatore successivo=a->successivo;
    int dim=dim_lista(a);
    int n=dim;
    for(int x=0;x<2;x++)
    {
        int i=1;
        while(i<n)
        {
            if(i==n-1)
            {
                if(x==0)
                    testa=attuale;
                attuale=attuale->successivo;
                successivo=attuale->successivo;
                 printf("IFFONE:successivo: %p\nattuale: %p\n",successivo,attuale);
                i++;
            }
            else
            {
                if(attuale->valore <= successivo->valore)
                {
                    printf("IF:successivo: %p\nattuale: %p\n",successivo,attuale);
                    successivo=successivo->successivo;
                    i++;
                    printf("i: %d\n",i);
                }
               else
                {
                    i=1;
                    puntatore temp=attuale;
                    attuale->successivo=successivo;
                    successivo->successivo=temp;
                    printf("ELSE:successivo: %p\nattuale: %p\n",successivo,attuale);
                }
            }
        }
        n--;
    }
    
    return testa;
}

void main(void)
{
    puntatore a=crea_lista();
    stampa_lista_ite(a);

    a=ordina_lista(a);
    stampa_lista_ite(a);
    
    int k;
    printf("Inserire l'elemento k: ");
    scanf("%d", &k);

    stampa_lista_ite(a);
}