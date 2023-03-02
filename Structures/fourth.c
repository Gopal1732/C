#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1={17,9.8,"Gopal"};
    
    printf("Student name = %s\n",s1.name);
   
   struct student *ptr= &s1;
    //printf("Student name = %s\n",(*ptr).name);
    printf("Student name = %s\n",ptr->name);
   



    
}