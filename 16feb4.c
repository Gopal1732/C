//how many prime number
#include<stdio.h>
#include<conio.h>

int main(){
    int row,col,x=1,count=0;
    printf("enter rows:");
    scanf("%d",row);

    printf("enter columns:");
    scanf("%d",col);

    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=2;k=arr[i][j]/2;k++){
                if(arr[i][j]%k==0){
                    x=0;
                    break;
                }
            }
            if(x==1){
              count++;
            }
        }
    }

    printf("prime numbers are%d",count);

    return 0;
}



