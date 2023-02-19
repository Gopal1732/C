#include<stdio.h>

void storetables(int arr[][10],int n,int m,int number);

int main(){
    int tables[2][10],j;
    storetables(tables,0,10,5);
    storetables(tables,1,10,8);
    
    for(int j=0;j<10;j++){
     printf("%d\t",tables[0][j]);
    }


    for(int j=0;j<10;j++){
      printf("%d\t",tables[1][j]);
    }

    return 0;
}

void storetables(int arr[][10],int n,int m,int number){
    for(int j=0;j<m;j++){
      arr[n][j]=number * (j+1);
        }
}