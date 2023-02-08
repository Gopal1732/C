// Write a program in C to copy the elements of one array into another array.

#include<stdio.h>

int main(){
    int i,n;
    int arr[100],newarr[100];
    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        newarr[i]=arr[i];
    }

    printf("old Elements are:-");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

     printf("\nCopied array Elements are:-");
    for(int i=0;i<n;i++){
        printf("%d ",newarr[i]);
    }
  
    
}