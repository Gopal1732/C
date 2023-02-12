//  Write a program in C for Multiplication of two Matrices of same size. 

#include<stdio.h>

int main(){
    int i,j,n;
    int arr[50][50],arr2[50][50],arr3[50][50];

    printf("input size of matrix:");
    scanf("%d",&n);


    printf("Enter element in first matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("input element in second matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }


    printf("First Matrix:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",arr[i][j]);
        }printf("\n");
    }

    printf("\nsecond matrix:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",arr2[i][j]);
        }printf("\n");
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr3[i][j]=arr[i][j]*arr2[i][j];
        }
    }
 
    printf("\nMultiplication of matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",arr3[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}