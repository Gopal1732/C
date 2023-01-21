#include<stdio.h>

void swap(int a, int b);
void _swap(int *a,int *b);

int main(){
    int x=5, y=3;
    swap(x, y);
    printf("value of x=%d and y=%d\n",x,y);

    
    _swap(&x,&y);
    printf("value of a=%d and  b=%d\n",x,y);
      
    return 0;     
}

//call by value
void swap(int a, int b){
    int c = a;
    a = b;
    b= c;
    printf("value of a=%d and  b=%d\n",a,b);
}
 

 //call by reference
void _swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
      printf("value of a=%d and  b=%d\n",*a,*b);
}