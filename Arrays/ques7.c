//  Write a program in C to find the maximum and minimum element in an array.

#include<stdio.h>

int main(){
    int n,i;
    int arr[100],max,min;
    printf("Input the number of element:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
       if(arr[i]<min){
            min=arr[i];

        }
    }
    printf("maximum Element is:%d",max);
    printf("\tMinimum Element is:%d",min);




}