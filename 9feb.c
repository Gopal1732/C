#include<stdio.h>

int main(){
    int a=10;

    int *ptr;
    printf("value of variable a:%d\n",a);
    printf("address of variable a:%d\n",&a);

    //pointer
    ptr=&a;
    printf("\nAddress of value hold by a pointer:%d\n",ptr);
    printf("value of a hold by a pointer:%d",*ptr);
}