#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int valore;
    struct nodo* successivo;
}elemento;

typedef elemento* puntatore; 

int main()
{
    puntatore testa;
    int i=0;

    puntatore attuale;

    do
    {   
        if(i==0)
        {
            attuale=malloc(sizeof(elemento));
            testa=attuale;
            printf("Inserire un valore: ");
            scanf("%d",&attuale->valore);
            //o anche  scanf("%d",&(*attuale).valore);
        }    
        attuale->successivo=malloc(sizeof(elemento));
        //o anche (*attuale).successivo=malloc(sizeof(elemento));
        attuale=attuale->successivo;
        //o anche attuale=(*attuale).successivo;
        printf("Inserire un valore: ");
        scanf("%d",&attuale->valore);
        //o anche scanf("%d",&(*attuale).valore);
        i++;
    }while(attuale->valore>=0);
    //o anche }while((*attuale).valore>=0);
    attuale->successivo=NULL;
    //o anche (*attuale).successivo=NULL;

    attuale=testa;

    while(attuale!=NULL)
    {
        printf("%d --> ",attuale->valore);
        //o anche printf("%d --> ",(*attuale).valore);
        attuale=attuale->successivo;
        //o anche  attuale=(*attuale).successivo;
    }
    printf("\b\b\b\b    \n");
}