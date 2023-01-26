//Write a program in C to read any Month Number in integer and display Month name in the word.
#include<stdio.h>

void main(){
    int month;
    printf("enter month number:");
    scanf("%d",&month);
    switch(month){
        case 1:printf("January");
        break;
         case 2:printf("feb");
        break;
         case 3:printf("mar");
        break;
         case 4:printf("april");
        break;
         case 5:printf("may");
        break;
         case 6:printf("June");
        break;
         case 7:printf("July");
        break;
         case 8:printf("August");
        break;
         case 9:printf("sep");
        break;
         case 10:printf("oct");
        break;
         case 11:printf("nov.");
        break;
         case 12:printf("Dec.");
        break;
        default:printf("invalid input");

    }
}