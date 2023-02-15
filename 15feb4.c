// no argumemt with no return value
#include<stdio.h>
#include<conio.h>


void sum(); //declaration

main(){
    sum();//calling
}

//defination
void sum(){
    int a,b,res;
    printf("enter 1st value:");
   scanf("%d",&a);

   printf("enter 2nd value:");
   scanf("%d",&b);
   
    res=a+b;
    printf("The sum is:%d",res);
   
}

