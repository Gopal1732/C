//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>

int main(){
    int n1,n2,calculate;
    printf("enter first transaction:");
    scanf("%d",&n1);
    printf("enter second transaction:");
    scanf("%d",&n2);

    calculate=n2-n1;

    if(calculate>0){
        printf("profit:%d",calculate);
    }
    else{
        printf("loss:%d",calculate);
    }
   
    return 0;
}