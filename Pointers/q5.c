#include<stdio.h>

void _swap(int *a,int *b); 

int main(){
    int x=5,y=8;
    printf("before swap the number a=%d ,b=%d\n",x,y); 

    _swap(&x,&y);
    printf("after swap the number a=%d ,b=%d\n",x,y); 
    
    return 0;
}

//call by value
void _swap(int *a,int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
   printf("a=%d ,b=%d",*a ,*b);
}