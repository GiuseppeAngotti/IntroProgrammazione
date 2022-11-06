#include <stdio.h>

int primo(int x)
{
    int non_primo;
    if(x==1)
        return (0);
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            return (0);
    }
    return (1);
}
void test()
{
    int c=0;
    for(int i=1;i<=100;i++)
    {
        if(primo(i)==1)
            c++;
    }
    printf("I numeri primi trovati da 1 a 100 sono: %d",c);
}

int main()
{
    int x;

    printf("Inserire il numero per controllare se esso sia primo: ");
    scanf("%d",&x);

    if(primo(x)==0)
        printf("%d non è primo.\n",x);
    else
        printf("%d è primo.\n",x);

    test();
    
    return (0);
}