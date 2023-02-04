//Write a program in C to display n terms of natural number and their sum.
#include<stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum =sum+i;
    }
     printf("%d",sum);
    return 0;

}