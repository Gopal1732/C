#include<stdio.h>

enum Level{
    L=23,
    M=87,
    H=321
};

void main(){
    enum Level myvar =H;
    printf("%d",myvar);
}

