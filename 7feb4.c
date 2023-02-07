#include<stdio.h>

int main(){
    int i,j;
    int ar[2][2];
   
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&ar[i][j]);
        }
    }
   

    printf("2D array:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           printf(" %d ",ar[i][j]);
        }
        printf("\n");
        
    }
} 