#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll =2110990520;
    s1.cgpa =9.4;
    strcpy(s1.name,"Gopal");

    printf("Student name = %s\n",s1.name);
    printf("Student rollno = %d\n",s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);


    
}