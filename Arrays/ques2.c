// Write a program in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>

int main(){
    int i,n;
    int arr[100];
    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Elements are:-");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
  
    printf(" \nReverse elements are:-");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}