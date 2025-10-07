#include <stdio.h>
int main() {
    int a =10;
    int b =20;
    int c;
    printf("SWAPPED VALUES ARE %d,%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("SWAPPED VALUES ARE %d,%d\n",a,b);
}