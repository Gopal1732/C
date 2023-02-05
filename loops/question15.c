// Write a C program to calculate the factorial of a given number. 
#include<stdio.h>

int main(){
    int m;
    printf("enter value for factorial:");
    scanf("%d",&m);
    int fact=1;
    for(int i=1;i<=m;i++){
        printf("fact%d:",i);
        fact=fact*i;
         printf("%d",fact);
       printf("\n");
    }
 
   return 0;
}