//Write a program in C to display the multiplication table of a given integer

#include<stdio.h>

int main(){
    int n,sum=0;
    int mul;

    printf("table to be calculated:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        mul=n*i;
        printf(" %d x %d :-%d\n",n,i,mul);
    }

    return 0;
}
