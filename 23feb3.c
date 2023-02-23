#include<stdio.h>

enum Level{
    Low=23,
    Mid=87,
    High=123
};

void main(){
    enum Level myvar =High;
    printf("%d",myvar);
}

0