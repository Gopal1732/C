#include<stdio.h>

int main(){
    int num1,num2;
    printf("enter 1st number:");
    scanf("%d",&num1);
    printf("enter 2nd run");
    scanf("%d",&num2);

    if(num1 == num2){
        printf("both are equal");
    }
    else{
        printf("both are not equal");
    }
    return 0;
}