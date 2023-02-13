// Write a program in C to print or display upper triangular matrix.

#include<stdio.h>

int main(){
    int i,j,n;
    int arr[50][50];

    printf("input size of matrix:");
    scanf("%d",&n);
  

    printf("Enter element in matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
           
        }
    }

    printf("Matrix:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",arr[i][j]);
        }printf("\n");
    }

    printf("Setting zero in upper triangle:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j){
              printf(" %d ",arr[i][j]);  
            }
           else{
            printf(" %d ",0);
           }
        }printf("\n");
    }



}