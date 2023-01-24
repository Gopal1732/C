//Write a program in C to read any day number in integer and display day name in the word. 
#include<stdio.h>

int main(){
int num;

printf("enter no. of the day:");
scanf("%d",&num);


switch(num){
        case 1: printf("monday");
        break;

        case 2: printf("tuesday");
        break;

        case 3: printf("Wednesday");
        break;

        case 4: printf("Thursday");
        break;

        case 5: printf("Ffriday");
        break;

        case 6: printf("Saturday");
        break;

        case 7: printf("sunday");
        break;

        default :
        printf("invalid day");
    }

    return 0;
}   