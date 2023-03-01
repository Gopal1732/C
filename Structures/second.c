#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student ece[100];
    ece[0].roll =520;
    ece[0].cgpa =7.4;
    strcpy(ece[0].name,"Gopal");

    printf("Student name = %s\n",ece[0].name);
    printf("Student rollno = %d\n",ece[0].roll);
    printf("Student cgpa = %f\n",ece[0].cgpa);


    
}