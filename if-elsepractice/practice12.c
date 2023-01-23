//Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division. 
#include<stdio.h>

int main(){
    int roll,physics,chemistry,computer,total;
    char name;
    float percentage;
    printf("roll number of student:");
    scanf("%d",&roll);
    printf("enter name of student:");
    scanf("%s",&name);

    printf("Enter marks in physics:");
    scanf("%d",&physics);

    printf("Enter marks in chemistry:");
    scanf("%d",&chemistry);

    printf("Enter marks in computer:");
    scanf("%d",&computer);


    total=physics+chemistry+computer;
    printf("total marks:%d\n",total);

    percentage=total*0.3;
    printf("total percentage:%f\n",percentage);

    if(percentage>90){
        printf("first divison");
    }
    else if(percentage>=90 || percentage<80){
        printf("second divison");
    }
    else if(percentage>=80 || percentage<70){
        printf("third divison");
    }
    else{
        printf("pass");
    }

    return 0;
}