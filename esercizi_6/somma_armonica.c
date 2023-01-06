#include <stdio.h>
/*tutti i print compresa la variabile "ciccio" serviva a me per
capire il funzionamento dei puntatori ma soprattutto per le
funzioni ricorsive*/
void somma_armonica(int n, double *h)
{
    printf("Stampe %d{\n",n);
    printf("%lf\n",*h);
    printf("%d\n",n);
    printf("%p\n",h);
    
    if(n==1)
    {
        printf("\nIF %d{\n",n);
        printf("%p\n",h);
        printf("%d\n",n);
        *h=1.0;
        printf("%lf\n",*h);
        printf("}%dI\n",n);
    }   
    else
    {
        printf("\nELSE %d{\n",n);
        somma_armonica(n-1,h);
        int ciccio=5;
        printf("\n%d\n\n",ciccio+=5);
        printf("%p\n",h);
        printf("%d\n",n);
        *h= *h + 1.0/n;
        printf("%lf\n",*h);
        printf("}%dE \n",n);
    }
    printf("\n}%d\n",n);
}

int main()
{
    int num;
    double p;
    printf("Inserire n: ");
    scanf("%d",&num);

    printf("L'indirizzo della memoria di p è:\n%p\n\n\n",&p);

    somma_armonica(num, &p);
    printf("\nLa somma armonica per n= %d è uguale a %lf",num,p);
    
    return 0;
}