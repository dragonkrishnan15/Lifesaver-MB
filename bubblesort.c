#include <stdio.h>
int main(){
    int search;
    printf("Enter the number");
    scanf("%d",&search);

    int array[]={1,2,3,4,5,6,7,8};
    int  high = 7;
    int low =0;
    while(high>=low){
        int mid = high+low/2;
        if (search==array[mid]){
            printf("Found");return 0;
        }
        else if (search>mid)
        {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }printf("Not found");return 0;
}