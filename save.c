# include <stdio.h>
# include <math.h>
int logic(){
    int n;
    for (n=0;n<7;n++){
        printf("%d\n",1<<n);//left movement of left to binary the place that n have if 1 it place one to left 
    }
    return 0;
}

int pd(){
    int base =1 ;
    int reserve=3;
    int n = 8;
    for (int i =0;i<n;i++){
        if (i==0){
            printf("1\n",base);
        }        
        else {
            base = base*reserve;
            printf("%d\n",base);
        }
    }return 0;
}
int main(){
    int n ;
    printf("Enter the number");
    scanf("%d",&n);
    for (int i =0;i<n;i++){
        printf("%d\n",pow(n,i));
    }return 0;
}