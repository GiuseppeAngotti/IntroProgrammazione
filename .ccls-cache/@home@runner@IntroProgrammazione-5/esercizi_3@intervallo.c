#include <stdio.h>

void stampa_intervallo(float a,float b,float d,int c)
{
    if(a<b)
    {
        printf("%f \n",a+c*d);
        stampa_intervallo(a+c*d,b,d,c+1);
    }
}
int main()
{
    float a,b,d;
    int c=0;

    do
    {
        printf("Inserire a maggiore di 0: ");
        scanf("%f",&a);
    }while(a<0);
    do
    {
        printf("Inserire b maggiore di 0 e maggiore di a: ");
        scanf("%f",&b);
    }while(b<0 && b<a);
    do
    {
        printf("Inserire d minore uguale di %f: ",b-a);
        scanf("%f",&d);
    }while(d>b-a);
    stampa_intervallo(a,b,d,c);
    
    return(0);
}