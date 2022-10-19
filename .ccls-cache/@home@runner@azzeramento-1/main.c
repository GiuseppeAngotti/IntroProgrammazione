#include <stdio.h>

int main(void) 
{
    int x;
    printf("Inserire un numero: ");
    scanf("%d",&x);
    if(x<0)
    {
        while(x!=0)
        {
            x++;
        }
    }
    else
    {
        while(x!=0)
        {
            x--;
        }
    }
    printf("\nx= %d.",x);
    return 0;
}