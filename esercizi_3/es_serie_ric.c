#include <stdio.h>

int pot(int n)
{
    return n*n;
}

float som(int k)
{
    if(k==0)
        return 1;
    return(1./(pot(2*k+1))+som(k-1));
}

int main()
{
    int k;
    printf("Inserire k: ");
    scanf("%d",&k);

    printf("Il risultato della serie è: %f", som(k));
    return 0;
}