#include<stdio.h>

void operat(int a,int b,int *sum,int *mul ,int *avg); 

int main(){
    int x=5,y=8;
    int sum,mul,avg;
    operat(x,y,&sum,&mul,&avg);
    printf("sum =%d,mul=%d,avg=%d",sum,mul,avg);

    
    return 0;
}

//call by reference
void operat(int a,int b,int*sum,int*mul,int*avg){
   *sum =a+b;
    *mul=a*b;
    *avg=(a+b)/2;
}