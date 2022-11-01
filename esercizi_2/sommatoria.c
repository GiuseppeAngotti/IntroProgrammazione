#include <stdio.h>

void main()
{
    int n,k,help,somm=0;

    printf("Inserire n: ");
    scanf("%d",&n);

    printf("Inserire k: ");
    scanf("%d",&k);

    help=k;
    
    for(int i=1;i<=n;i++)
    {
        somm+=help;
        help*=k;
    }
    printf("Risultato sommatoria= %d",somm);
}