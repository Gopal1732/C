//.Write a C program to check whether a triangle can be formed by the given value for the angles
#include<stdio.h>

int main(){
    int  angle1,angle2,angle3,total_angle;
   
    printf("Enter three angles:");
    scanf("%d %d %d",&angle1,&angle2,&angle3);

    total_angle=angle1+angle2+angle3;

    if(total_angle==180){
        printf("triangle is valid");
    }
    else{
        printf("triangle is not possible");
    }
    return 0;

}