//Write a program in C to accept a matrix and determine whether it is a sparse matrix

#include<stdio.h>

int main(){
    int i,j,r,c;
    int arr[50][50];
    int ctr=0;

    printf("input no. of rows of matrix:");
    scanf("%d",&r);
  
    printf("input no. of columns of matrix:");
    scanf("%d",&c);
  
    printf("Enter element in matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0){
                ++ctr;
            }
           
        }
    }

    if(ctr>((r*c)/2)){
        printf("the given matrix is a spare matrix\n");
    }
    else{
        printf("the given matrix is not a spare matrix\n");
    }

  printf("There are %d number of zeros in the matrix.\n\n",ctr);



}