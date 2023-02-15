// no argumemt with return value
#include<stdio.h>

int sum(); //declaration

int main(){
    int result;

    result=sum();
    printf("\nThe sum is:%d",result);
}

//defination
int sum(){
    int a,b,res;
    printf("enter 1st value:");
   scanf("%d",&a);

   printf("enter 2nd value:");
   scanf("%d",&b);
   
    res=a+b;
    return res;  
   
}

