#include <stdio.h>

int main(void) 
{
    int n=5;
    int f=n;
    while(n>1)
    {
        f=f*(n-1);
        n=n-1;
    }
    printf("Il fattoriale di n è uguale a %d",f);
}