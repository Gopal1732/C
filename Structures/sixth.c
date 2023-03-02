#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1);

int main(){
    struct student s1={17,9.8,"Gopal"};
    printinfo(s1);    
}

void printinfo(struct student s1){
    printf("Student Information:");
    printf("Student name = %s\n",s1.name);
    printf("Student rollno = %d\n",s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);
}
