#include <stdio.h>
int main(){int search ;
    printf("Enter the number to search ");
    scanf("%d",&search);
    int arr[]={1,4,5,6,7,4,3,2,1};
    int line = sizeof(arr)/sizeof(arr[0]);
    for (int i =0;i<line;i++){
        if (arr[i]==search){
            printf("Found");return 0;
        }
    }
    printf("Not founded");return 0;
}