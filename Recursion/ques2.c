// Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include<stdio.h>

int sum(int a){
    if(a<=9){
        return a;
    }
    else{
        return (a%10 +sum(a/10));

    }
}

int main(){
    int a;
    printf("enter any digit: ");
    scanf("%d",&a);
    printf("sum of digit:%d",sum(a));

    return 0;
}