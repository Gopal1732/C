//Write a program in C to display the multiplication table of a given integer

#include<stdio.h>

int main(){
    int n,sum=0;
    int m;

    printf("table to be calculated:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        m=n*i;
        printf(" %d x %d :-%d\n",n,i,m);
    }

    return 0;
}
