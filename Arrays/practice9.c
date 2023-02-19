#include<stdio.h>

int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<10;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Highest number is%d",arr[0]);    
}