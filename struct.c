# include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee{
    char name[100];
    int salary;
    int age;
};
int main(){
    struct employee e1[10];
    for (int i =0;i<10;i++){char nam[100];
        printf("\nEnter employee name :");
        scanf("%s",&nam);
        strcpy(e1[i].name,nam);
        printf("\nEnter the salary :");
        scanf("%d",&e1[i].salary);
        printf("\nEnter the age :");
        scanf("%d",&e1[i].age);
}return 0;
}