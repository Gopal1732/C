// Write a program in C to calculate determinant of a 3 x 3 matrix.

#include<stdio.h>

int main(){
    int i,j,n;
    int arr[50][50];
    int det=0;


    printf("Enter element in matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
           
        }
    }

    printf("Matrix:-\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" % 4d ",arr[i][j]);
        }printf("\n");
    }

    for(i=0;i<3;i++){
      det = det + (arr[0][i]*(arr[1][(i+1)%3]*arr[2][(i+2)%3] - arr[1][(i+2)%3]*arr[2][(i+1)%3]));
    }
  printf("\nThe Determinant of the matrix is: %d\n\n",det);



}