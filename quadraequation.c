#include<stdio.h>
#include <math.h>

int main(){
    double a,b,c,image,deter,root1,root2;
    printf("Enter the number ");
    scanf("%lf %lf %lf",&a,&b,&c);
    deter = b*b-4*a*c;
    if (deter>0){
        printf("ROOTS ARE DISTINCT AND REAL\n");
        root1=(-b+sqrt(deter))/(2*a);
        root2 = (-b-sqrt(deter))/(2*a);
        printf("Roots are %.2lf and %.2lf",root1,root2);
    }
    else if (deter==0){
        printf("ROOT ARE EQUAL AND REAL\n");
        root1 =root2=-b/(2*a);
        printf("Roots are %.2lf and %.2lf",root1,root1);
    }
    else {
        printf("ROOOT ARE DIFFERENT AND IMAGENARY\n");
        double  real = -b/(2*a);
        image = sqrt(-deter)/(2*a);
        printf("Roots are %.2lf +%.2lfi",real,image);
        printf(" and %.2lf -%.2lfi",real,image);
    }return 0;
}