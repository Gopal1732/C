// Write a program in C to find a pair with given sum in the array.

#include<stdio.h>

void checkForsum(int arr[],int n,int s){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s){
                printf("\npair of elements can make the given sum by the values if index %d and %d",i,j);
            
            }
        }

    }
}

int main(){
    int arr[]={ 6,8,4,-5,7,9};
    int s= 1;
    printf("The given array:");
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe given sum is:%d\n",s);

    checkForsum(arr,n,s);
    return 0;
}