// Write a program in C to print first 50 natural numbers using recursion

#include<stdio.h>

int main(){
    int num=1;
    naturalnum(num);
}

int naturalnum(int n){
    if(n<=50){
        printf(" %d ",n);
        naturalnum(n+1);

    }
    
}