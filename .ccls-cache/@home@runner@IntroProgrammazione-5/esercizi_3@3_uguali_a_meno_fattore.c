#include <stdio.h>

int ugual(double x,double y,double eps) 
{
    double sottrazione;
    if(x<0)
    {
        x=-x;
    }
    if(y<0)
    {
        y=-y;
    }
    sottrazione=x-y;
    if(sottrazione>eps)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

int main() 
{
    double x,y,eps;
    int yes_no;
    printf("Inserire espsilon: ");
    scanf("%lf", &eps);
    printf("Inserire x: ");
    scanf("%lf", &x);
    printf("Inserire y: ");
    scanf("%lf", &y);

    yes_no=ugual(x,y,eps);
    if(yes_no==1)
    {
        printf("I due numeri sono uguali a meno di un fattore epsilon %lf\n",eps);
    }
    else
    {
        printf("I due numeri sono diversi con epsilon %lf\n",eps);
    }
    
    return(0);
 }