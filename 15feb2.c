// /argumemt with no return value
#include<stdio.h>

void sum(int a,int b);

int main(){
    int x,y;
   printf("Enter 1st value:");
   scanf("%d",&x);

   printf("\nEnter 2nd value:");
   scanf("%d",&y);
   
   sum(x,y);
}

//defination
void sum(int a,int b){
    int res;
    res=a+b;
    printf("\nThe sum is:%d",res);   
   
}

