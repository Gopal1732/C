//Write a C program to accept the height of a person in centimeter and categorize the person according to their height. 
#include<stdio.h>

int main(){
    int height;
    printf("enter height:");
    scanf("%d",&height);
    if(height<150){
        printf("the person is dwarf");
    }
    else if(height>=150 && height<165){
        printf("average");
    }
    else if(height>=165 && height<195){
        printf("tall");
    }
    else{
        printf("enter correct age");
    }
    return 0;
    

}