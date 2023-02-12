// Write a program in C to find transpose of a given matrix.

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


    printf("\nAddition of matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",arr[j][i]);
        }
        printf("\n");
    }

    printf("\n");
}