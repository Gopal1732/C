// . Write a program in C to accept two matrices and check whether they are equal. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,r,c,r2,c2,flag=1;
    int arr[50][50],brr[50][50];
   

    printf("input no. of rows and colums of 1st matrix:");
    scanf("%d %d",&r,&c);
  
    printf("input no. of rows and columns of 2nd matrix:");
    scanf("%d %d",&r2,&c2);
  
    printf("Enter element in 1st matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter element in 2nd matrix:");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&brr[i][j]);
        }
    }

    
    printf("1st matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf(" %d ",arr[i][j]);
        }printf("\n");
    }

    printf("\n2nd matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf(" %d ",brr[i][j]);
        }printf("\n");
    }

    if(r==r2 && c==c2){
        printf("\nThe matrices can be compared");
        for(i=0;i<r;i++){
            for(j=0;j<c2;j++){
                if (arr[i][j] != brr[i][j]){
                    flag=0;
                    break;
                }
            }
        }
    }
    else{
        printf("\nThe matrices can not be compared");
        exit(1);
    }

    if(flag==1){
        printf("\ntwo matrices are equal");
    }
    else{
        printf("\ntwo matrices are not equal");
    }




   


}