// Write a program in C to find sum of left diagonals of a matrix.

#include<stdio.h>

int main(){
    int i,j,n,m=0;
    int arr[50][50],sum=0;

    printf("input size of matrix:");
    scanf("%d",&n);
   m=n;

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

    for(i=0;i<n;i++){
        m=m-1;
        for(j=0;j<n;j++){
            if(j==m){
                sum=sum+arr[i][j];
            }
           
        }
    }
    printf("\naddition of left diagonal elements: %d",sum);

    printf("\n");
}