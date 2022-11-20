#include <stdio.h>

void main()
{
    int n;
    int help;

    printf("\nInserire un valore in cui tutti i suoi numeri minori e il valore stesso saranno elevati al quadrato: ");

    scanf("%d",&n);

   /* for(int i=1;i<=n;i++)
    {
        help=i;
        help*=help;
        //potevo scrivere anche così:
        //help=i*i;
        printf("Il quadrato di %d è: %d\n",i,help);
        //potevo scrivere anche così:
        // printf("Il quadrato di %d è: %d\n",i,i*i);
    }
    for(int i=n;i>=1;i--)
    {
        printf("Il quadrato di %d è: %d\n",i,i*i);
    }*/

    int c=1;
    while(c<=n)
    {
        printf("Il quadrato di %d è: %d\n",c,c*c);
        c++;
    }

    //per farlo con UNA SOLA VARIABILE:

    while(n>0)
    {
        printf("Il quadrato di %d è: %d\n",n,n*n);
        n--;
    }  
}

