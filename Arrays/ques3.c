// Write a program in C to find the sum of all elements of the array.

#include<stdio.h>

int main(){
    int i,n,sum=0;
    int arr[100];
    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

     printf("sum of array:%d",sum);
   
 
}