#include <stdio.h>

int indice(int a[],int n, int x)
{
    int i=0;
    while(i<n && a[i]!=x)
        i++;
    if(i==n)
        return (-1);
    return(i);
}

int membro(int a[],int n, int x)
{
    return(indice(a,n,x)!=-1);
}

int main()
{
    printf("Questo programma verifica se all'interno di un array è presente l'elemento 'x' inserito dall'utente (restituisce 1 se è presente 0 altrimenti). Se l'elemento 'x' è presente nell'array ci sarà un indice ad esso associato quindi se esiste questo indice quest'altra funzione restituirà 1 se è l'idice è all'interno tra 0 e la dimensione dell'array, -1 altrimneti\n\n");
    
    int a[4]={5,7,2,6};
    int x;
    int contenuto, index;

    printf("Inserire un valore: ");
    scanf("%d",&x);

    printf("E' contenuto il membro?\n%d", contenuto=membro(a,4,x));
    
    printf("\nE' contenuto l'indice?\n%d\n", index=indice(a,4,x));
        
    return 0;
}