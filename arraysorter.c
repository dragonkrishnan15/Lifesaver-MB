# include <stdio.h>
#include <windows.h>
void search(int arr[]){int high = sizeof(arr)/sizeof(arr[0]);
    int low= 0;
    int search=8;
    while (high>=low){
        int mid = (high +low)/2;
        if (search==mid){
            printf("find");break;
        }
        else if(search>mid){
            mid = low+1;
        }
        else {
            mid=high -1;}
    }
}
int main(){int temp=0;
    int n ;
    printf("ENTER THE TOTAL NUMBER OF ELEMENT ");
    scanf("%d",&n);
    int arr[n];
    system("cls");
    
    for (int i = 0;i<n+1;i++){
        printf("Enter element ");
        scanf("%d",&arr[i]);
    }
    printf("Raw DATA\n");
    for(int i=0;i<n+1;i++){
        printf("%d\t",arr[i]);
    }
    for (int i=0;i<n+1;i++){
        for (int j=0;j<n+1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nSORTED DATA\n");
    for (int i =0;i<n+1;i++){
        printf("%d\t",arr[i]);
    }search(arr);return 0;
}