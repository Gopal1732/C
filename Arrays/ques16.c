// Write a program in C to find sum of right diagonals of a matrix.

#include<stdio.h>

int main(){
    int i,j,n;
    int arr[50][50],sum=0;

    printf("input size of matrix:");
    scanf("%d",&n);


    printf("Enter element in matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(i==j){
                sum=sum+arr[i][j];
            }
        }
    }

    printf("Matrix:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",arr[i][j]);
        }printf("\n");
    }
   
    printf("\naddition of right diagonal elements: %d",sum);

    printf("\n");
}