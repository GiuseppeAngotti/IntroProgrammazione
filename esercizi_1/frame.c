#include <stdio.h>

void main()
{
    /*int z;
    int x=5;
    int y=10;
    printf("x=x+y= %d\n",x+y);
    {
        int x=100;
        printf("z=x+y= %d\n",x+y);
    }
    printf("x=z+1= %d",z+1);*/

    int x=5;
    int i=0;
    while(i<x)
    {
        printf("PRIMA i= %d\n",i);
        printf("DOPO i= %d\n", ++i );
        i++;
    }
}