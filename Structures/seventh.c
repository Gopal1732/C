#include<stdio.h>
#include<string.h>

//user defined
typedef struct computersciencestudent{
    int roll;
    float cgpa;
    char name[100];
}css;


int main(){
    css s1={17,9.8,"Gopal"};
    printf("Student name = %s",s1.name);    
}

