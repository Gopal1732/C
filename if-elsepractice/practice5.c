//Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote. 
#include<stdio.h>

int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age>=18){
        printf("congratulations! you are eligible for casting your vote");
    }
    else{
        printf("you are not eligible for vote");
    }
    return 0;
    

}