#include <stdio.h>

void main()
{
    int n,before_1,before_2,fibo=0;
    
    printf("Inserire n: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {   
        if(i==0)
        {
            printf("F(%d)= %d\n",i,fibo);
            before_2=fibo;
        }
        else if(i==1)
        {
            fibo++;
            printf("F(%d)= %d\n",i,fibo);
            before_1=fibo;
        }
        else
        {
                fibo=before_2+before_1;
                printf("F(%d)= %d\n",i,fibo);
                before_2=before_1;
                before_1=fibo;
        }
    }
}