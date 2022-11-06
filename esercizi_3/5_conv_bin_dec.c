#include <stdio.h>
#include <math.h>

int convertitore(int x)
{
    int sing_cif,scomp=x,dec=0;
    for(int i=0,c=1;i<c && scomp!=0;i++, c++)
    {
        sing_cif=scomp%10;
        dec+=sing_cif*pow(2,i);
        scomp/=10;
    }
    return (dec);
}

int main()
{
    int x,convertito;

    printf("Inserire il numero in base 2: ");
    scanf("%d",&x);

    convertito=convertitore(x);
    printf("L'equivalente in base è %d\n",convertito);
    return (0);
}