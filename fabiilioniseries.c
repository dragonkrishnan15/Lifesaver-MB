#include <stdio.h>
int series(int n){
    if (n==0){return 0;}
    else if (n==1){return 1;}
    else {return series(n-1)+series(n-2);}
}
int main(){
    int n ;
    printf("Enter number whoes series do you want");
    scanf("%d",&n);
    printf("\nThe series are below printing\n ");
    if(n>=0){
    for (int i =0;i<n+1;i++){
        printf("%d\t",series(i));
    }}
    else{printf("Negative number try agian");}return 0;

}