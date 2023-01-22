//Write a C program to find the largest of three numbers. 
#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("enter 1st number:");
    scanf("%d",&n1);
    printf("enter 2nd number:");
    scanf("%d",&n2);
    printf("enter 3rd number:");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3){
        printf("n1 is greatest");
    }
    else if(n2>n1 && n2>n3){
        printf("n2 is greatest");
    }
    else{
        printf("n3 is greatest");
    }
    return 0;
    

}