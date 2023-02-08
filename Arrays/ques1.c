// Write a program in C to store elements in an array and print it.

#include<stdio.h>

int main(){
    int i;
    int arr[10];
    printf("enter 10 elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
  
    printf("elements are:-");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}