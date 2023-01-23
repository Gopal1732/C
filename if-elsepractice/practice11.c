//Write a C program to calculate the root of a Quadratic Equation.
#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    float x1,x2;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("enter value of c:");
    scanf("%d",&c);
    d=b*b-(4*a*c);
    if(d==0){
        x1=-b/(2*a);
        x2=x1;
        printf("both roots are equal x1=%d x2=%d",x1,x2);
    }
    else if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
        printf("roots are real x1=%d x2=%d",x1,x2);
    } 
    else{
        printf("both roots are imaginary");
    }   

    return 0;   

}