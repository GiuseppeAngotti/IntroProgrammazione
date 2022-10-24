#include <stdio.h>

void main()
{
    float num=-1;// lo setto a -1 perché devo creare la mia condizione con il while altrimenti il ciclo non parte
    float somma=0;
    int contatore=0;
    /*while (num!=0)
    {
        printf("Inserire il valore (x_%d) per calcolare la media: ",contatore+1);
        scanf("%f",&num);
        if(num!=0)
            contatore++;
        somma+=num;
    }
    printf("La media dei numeri inseriti è: %f",somma/contatore);*/
    /*int x;
    printf("Inserire il numero di valori che si vuole inserire per calcolare la media: ");
        scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        printf("Inserire il valore (x_%d) per calcolare la media: ",i);
        scanf("%f",&num);
        somma+=num;
    }
    printf("Il risultato della media è: %f",somma/x);*/

    do
    {
        printf("Inserire il valore (x_%d) per calcolare la media: ",contatore+1);
        scanf("%f",&num);
        somma+=num;
        if(num!=0)
            contatore++;
    }while(num!=0);
    printf("Il risultato della media è: %f",somma/contatore);
}