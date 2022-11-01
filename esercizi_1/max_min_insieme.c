#include <stdio.h>

void main()
{
    int n=-1,val,max,min;
    do
    {
        printf("Inserire il numero di elementi dell'insieme: ");
        scanf("%d",&n);   
    }while(n<0);

    for(int i=1;i<=n;i++)
    {
        printf("Inserire il valore(%d): ",i);
        scanf("%d",&val);
        if(i==1)
        {
            max=val;
            min=val;
        }
        else
        {
            if(val>max)
            {
                max=val;
            }
            if(val<min)
            {
                min=val;
            }    
        }
    }
    printf("Il numero massimo inserito è: %d\n",max);
    printf("Il numero minimo inserito è: %d\n",min);
}