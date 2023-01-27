#include <stdio.h>
#include <stdlib.h>

typedef struct nodo//Creo una struct 'nodo': contiene un valore e un puntatore
{ 
    int valore; // 'valore' contiene il dato del nodo
    struct nodo* successivo; // Un puntatore al nodo successivo
} elemento; // Alias al tipo dati 'nodo'

typedef elemento* puntatore;

void main(void)
{
    puntatore testa; //Puntatore al primo 'nodo' della lista
    int n; //Lunghezza della lista, cioè numero di nodi
    printf("Inserire il numero di elementi della lista: ");
    scanf("%d", &n);

    // Creiamo e inseriamo i valori nella lista 
    //--------------------------------------------------
    puntatore attuale = malloc(sizeof(elemento));// Alloco il primo elemento della lista
    testa = attuale;// L'elemento di cui attualmente ho il puntatore è il primo
    (*attuale).valore = 1;// Al primo elemento della lista assegno il `valore` 1

    for(int i = 2; i < n + 1; i++)
    {

        (*attuale).successivo = malloc(sizeof(elemento));//fa si che si crei un altro elemento della mia lista e lo punto dal vecchio elemento (nella prima iterazione creo h1 e faccio puntare all'elemento attuale (h0) il successivo (h1)
        attuale = attuale->successivo;//ora devo aggiornare nella memoria il puntatore della mia lista e quindi puntarlo all'ultimo elemento 'più nuovo'(nel caso della prima iterazione cambio h0 e scrivo h1)
        attuale->valore = i; // Uguale a `(*attuale).valore = i`
    }
    
    attuale->successivo = NULL; //Il puntatore all'ultimo elemento è `NULL`

    // Stampiamo i valori contenuti nella lista nell'ordine in cui appaiono 
    attuale = testa; //Partiamo dalla testa della list

    while(attuale != NULL) //Finchè non esaurisco gli elementi della lista
    {
	printf("%d -> ", attuale->valore);// Stampo valore del `nodo` `attuale`
	attuale = attuale->successivo; //Aggiorno il puntatore a quello del prossimo `nodo`
    }  

    printf("\b\b\b   \n"); //Cancello gli ultimi 3 caratteri stampati a schermo
}
