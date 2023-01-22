//Write a C program to find the largest of three numbers. 
#include<stdio.h>

int main(){
    int x,y;
    printf("enter x coordinate point:");
    scanf("%d",&x);
    printf("enter y coordinate point:");
    scanf("%d",&y);
    

    if(x>0 && y>0){
        printf("1st quadrant");
    }
    else if(x<0 && y>0){
        printf("2nd quadrant");
    }
    else if(x<0 && y<0){
        printf("3rd quadrant");
    }
    else{
        printf("4th quadrant");
    }
    return 0;
    

}