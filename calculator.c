
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sumation(double a,double b){
   return a+b;
}
double subtraction(double a,double b){
return a-b;
}
double multiplication(double a,double b){
return a*b;
}
double division(double a,double b){
return a/b;
}
double power(double a,int m){
 return pow(a,m);
}
double squareRoot(double a){
    return sqrt(a);
}
int main()
{
    int option=0, m=0;
    double a=0,b=0;
    printf("Enter option:\n");
    printf("Press 1 for sumation|\n");
    printf("Press 2 for subtraction|\n");
    printf("Press 3 for multiplication|\n");
    printf("Press 4 for division|\n");
    printf("Press 5 for power|\n");
    printf("Press 6 for square root|\n");

    scanf("%d",&option);
    switch(option){
    case 1:
        scanf("%lf%lf",&a,&b);
        printf("%.2lf",sumation(a,b));
    case 2:
        scanf("%lf%lf",&a,&b);
        printf("%.2lf",subtraction(a,b));
    case 3:
        scanf("%lf%lf",&a,&b);
        printf("%.2lf",multiplication(a,b));
    case 4:
        scanf("%lf%lf",&a,&b);
        printf("%.2lf",division(a,b));
    case 5:
        scanf("%lf%d",&a,&m);
        printf("%.2lf",power(a,m));
    case 6:
        scanf("%lf",&a);
        printf("%.2lf",squareRoot(a));

    }

    return 0;
}
