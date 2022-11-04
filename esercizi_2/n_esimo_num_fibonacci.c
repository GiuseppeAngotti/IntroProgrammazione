#include <stdio.h>

void fibonacci(int fi_2,int fi_1,int pos)
{
    int fi=0;
    for(int i = 2; i <= pos; i++) 
    {
        fi = fi_1 + fi_2; 
        printf("F(%d) = %d\n", i, fi);
        fi_2 = fi_1;
        fi_1 = fi;
  }  
}

void main()
{
    int n;
    
    printf("Inserire n: ");
    scanf("%d",&n);

    int F0 = 0, F1 = 1; 
    printf("F(0) = %d\n", F0);
    printf("F(1) = %d\n", F1);

    fibonacci(F0,F1,n);
    
    /*int n,before_1,before_2,fibo=0;
    
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
    }*/
    /*     FATTO DAL TUTOR
    int n;
    
    printf("Inserire n: ");
    scanf("%d",&n);
    // Inizializzo e stampo i primi due valori della successione
  int F0 = 0, F1 = 1; 
  printf("F(0) = %d\n", F0);
  printf("F(1) = %d\n", F1);

  // Se `i > 1` inizializzo gli elementi `i - 1`-esimo e `i - 2`-esimo
  int Fi, Fi_1 = F1, Fi_2 = F0; 

  for(int i = 2; i <= n; i++) {
    Fi = Fi_1 + Fi_2; // Uso la formula per calcolare l'elemento `i`-esimo
    printf("F(%d) = %d\n", i, Fi);
    Fi_2 = Fi_1; // Aggiorno per calcolare l'elemento `i + 1`-esimo
    Fi_1 = Fi;
  }
    */
}