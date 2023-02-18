#include<stdio.h>

void max(int a,int b);

int main(){
    int x=7,y=2;
    max(x,y);

    return 0;
}

//call by value
void max(int a,int b){
   if(a>b){
    printf("maximum number is:%d",a);
   }
   else{
    printf("maximum number is:%d",b);

   }
}