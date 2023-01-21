#include<stdio.h>

void square(int n);
void _square(int *n);

int main(){
    // int age=22;
    // int *ptr= &age;
    

    // //address
    // printf("%u\n",&age);
    // printf("%u\n",ptr);
    // printf("%u",&ptr);

   //int i =5;
   //int *ptr =&i;
   //int **pptr= &ptr;

   //printf("%d\n", **pptr);
 

    int number=4;
    square(number);
    printf("%d\n",number);

    _square(&number);
    printf("%d\n",number);

    return 0;
}


//call by value
void square(int n){
    n=n*n;
    printf("%d\n",n);
}


void _square(int *n){
    *n = (*n) * (*n);
    printf("%d\n",*n);
}