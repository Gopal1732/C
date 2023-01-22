//Write a C program to check whether a given number is positive or negative.
#include<stdio.h>

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n>0){
        printf("positive number:%d",n);
    }
    else if(n==0){
        printf("nor neagtive nor positive:%d",n);
    }
    else{
        printf("negative number:%d",n);
    }
    return 0;

}