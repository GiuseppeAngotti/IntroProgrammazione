#include <stdio.h>

int somma_ite(int num)
{
    int s=0,mod;
    while(num!=0)
    {
        mod=num%10;
        s+=mod;
        num/=10;
    }
    return s;
}

int somma_ric(int num)
{
    if(num==0)
        return (0);
    else
    {
        
        return((num%10)+somma_ric(num/10));
    }
}

void test()
{
    int g,max=1;
    for(int i=2;i<=1000;i++)
    {
        if(i>=2)
        {
             
            if(max<somma_ric(i))
            {
                g=i;
                max=somma_ric(i);
            }
        }
    }
    printf("Il valore massimo della somma delle cifre dei numeri da uno a mille è %d con il valore %d\n",max,g);
}

void main()
{
    int num;
    printf("Inserire un numero: ");
    scanf("%d",&num);

    printf("Somma cifre ricorsivo/iterativo: %d/%d\n",somma_ric(num),somma_ite(num));
    
    test();
}