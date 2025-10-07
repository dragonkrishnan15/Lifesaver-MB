#include <stdio.h>
#include <conio.h>

int main() {
    // data variables
    char st[30];
    int rollno;
    int class;
    char sec;
    float per;
    // user input interface
    printf("Enter the Name ");
    scanf("%s",&st);
    printf("Enter the rollno");
    scanf("%d",&rollno);
    printf("Enter the class");
    scanf("%d",&class);
    printf("Enter the section ");
    scanf(" %c",&sec);
    printf("Enter the per") ;
    scanf("%f",&per);
    // output in display
    printf("Student Name : %s\n", st);
    printf("ROll Number : %d\n",rollno);
    printf("Class : %d%c\n",class,sec);
    printf("Average marks are %f",per);
    return 0;

}