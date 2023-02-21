// Write a program in C to count the digits of a given number using recursion. 

#include<stdio.h>

int ndigit(int n);

int main(){
    // ndigit(543);
    int num;
    printf("enter any number :");
    scanf("%d",&num);

    printf("count of digit: %d",ndigit(num));
    return 0;
}

int ndigit(int n){
     static int count=0;
    if(n !=0){
        count++;
        ndigit(n/10);
    }
    return count;
}

