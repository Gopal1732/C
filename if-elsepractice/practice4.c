//Write a C program to find whether a given year is a leap year or not.
#include<stdio.h>

int main(){
    int year;
    printf("enter any year:");
    scanf("%d",&year);
    if(year%400==0){
        printf("%d is a leap year",year);
    }
    else if(year%100==0){
        printf("%d is not a leap yeap",year);
    }
    else if(year%4==0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}