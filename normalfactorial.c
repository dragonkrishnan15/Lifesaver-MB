# include <stdio.h>
int main(){
    int n ;int fact=1;
    printf("Enter the number ");
    scanf("%d",&n);
    for (int i =1;i<n+1;i++){
        fact = fact*i;
    }printf("%d",fact);return 0;
}