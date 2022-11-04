#include <stdio.h>
#include <math.h>

double distanza(double x1,double y1, double x2, double y2) 
{
    double x,y;
    x= (x1-x2)*(x1-x2);
    y= (y1-y2)*(y1-y2);
    return sqrt(x+y);
}

int main() 
{
    double x1,x2,y1,y2;
    printf("x1: ");
    scanf("%lf", &x1);
    printf("y1: ");
    scanf("%lf", &y1);
     printf("x2: ");
    scanf("%lf", &x2);
    printf("y2: ");
    scanf("%lf", &y2);

    printf("La distanza tra (%.3lf,%.3lf) e (%.3lf,%.3lf) è uguale a: %lf\n",x1,y1,x2,y2,distanza(x1,y1,x2,y2));
    
    return(0);
 }