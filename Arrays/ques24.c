// Write a program in C to check whether a given matrix is an identity matrix. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,r,c,id=1;
    int arr[50][50];
   

    printf("input no. of rows and colums of  matrix:");
    scanf("%d %d",&r,&c);
  
   
    printf("Enter element in matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

 
    printf("1st matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf(" %d ",arr[i][j]);
        }printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if (arr[i][j] != 1 && arr[j][i] !=0){
                id=0;
                break;
            }
        }
    }

    if(id==1){
        printf("\nmatrix is a identity matrix");
    }
    else{
        printf("\nmatrix is not a identity matrix");
    }




   


}