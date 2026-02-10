#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[2][3][3];
    for (int i =0;i<2;i++){
        for (int j=0;j<3;j++){
            for(int k= 0;k<3;k++){system("cls");
                printf("matrix %d\n",i+1);
                printf("adress %d %d ",j,k);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for (int i =0;i<2;i++){
        printf("The matrix number %d\n ", i+1);
        for (int j=0;j<3;j++){
            for(int k= 0;k<3;k++){
                printf("%d\t",arr[i][j][k]);
            }printf("\n");
        }
    }return 0;
}