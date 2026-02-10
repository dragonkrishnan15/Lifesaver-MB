# include <stdio.h>

int main(){
    int a ,b,c;
    a = 0;
    b=1;
    for (int i =0;i<6;i++){
        printf("%d ",a);
        c= a+b; a = b;
        b=c;
    }return 0;
}