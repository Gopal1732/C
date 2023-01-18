#include<stdio.h>

int main(){
    int year;
    printf("enter any year:");
    scanf("%d",&year);

    if((year % 400)==0 ){
        printf("year is a leap year :%d",year);
    }
    else if((year%100)==0){
        printf("year is not leap year");
    }
    else if((year%4)==0){
        printf("year is a leap year");
    }
    else{
        printf("year is not leap yeear");
    }
    return 0;
    
}