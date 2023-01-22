//Write a C program to accept two integers and check whether they are equal or not. 
#include<stdio.h>

int main(){
    int n1,n2;
    printf("enter 1st number:");
    scanf("%d",&n1);
     printf("enter 2nd number:");
    scanf("%d",&n2);
    
    if(n1==n2){
        printf("both are equal");

    }
    else{
        printf("both are not equal");
    }
    return 0;
}