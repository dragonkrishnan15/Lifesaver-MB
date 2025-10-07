# include <stdio.h>

int main(){
    //defining the variables
    char a ; char sb[20];int k;float c;
    printf("Enter the student Name ");
    scanf("%s",&sb);
    printf("Enter the section");
    scanf(" %c",&a);
    printf("Enter the ROLLNUMBER");
    scanf("%d",&k);
    printf("Enter the marks");
    scanf("%f",&c);
    // marks editor for you
    printf("Student data");
    printf("The name is %d\n",sb);
    printf("OF class section %d%c\n",k,a);
    printf("Total marks outoff %f/100",c);
}
