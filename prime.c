#include <stdio.h>
int main(){
    int n;int count = 0;
    printf("Enter number");
    scanf("%d",&n);
    int k =n*n;
    for (int i =1;i<k+1;i++){
        if (n%i==0){
            count = count +1;
        }
    }
    if (count>2){
        printf("NOT prime");
    }
    else {
        printf("Prime");
    }return 0;
}