//Write a program in C to display the n terms of even natural number and their sum.
#include<stdio.h>

int main(){
    int n;
    int sum=0;
    printf("enter no.of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+2*i;
    }
    printf("sum of even no.:-%d",sum);
}