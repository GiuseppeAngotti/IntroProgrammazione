#include <stdio.h>

int primo_ite(int x)
{
    if(x==1)
        return (0);
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            return (0);
    }
    return (1);
}

int primo_ric(int x, int x_1)
{
    if(x_1==1)
    {
        return (1);
    }
    if(x%(x_1)==0)
    {  
        return (0);
    }
    return(primo_ric(x,x_1-1));
}

/*void test()
{
    int c=0,a,b;
    float=distanza;
    for(int i=1;i<=100;i++)
    {
        if(primo_ite(i)==1)
        {
            c++;
            primo_ite(i)
        }
    }
    printf("I numeri primi trovati da 1 a 100 sono: %d",c);
}*/

int main()
{
    int x;

    printf("Inserire il numero per controllare se esso sia primo: ");
    scanf("%d",&x);
    int x_1=x-1;
    
    if(primo_ite(x)==0)
        printf("%d non è primo.\n",x);
    else
        printf("%d è primo.\n",x);
    if(primo_ric(x,x_1)==0)
        printf("%d non è primo.\n",x);
    else
        printf("%d è primo.\n",x);

    //test();
    
    return (0);
}