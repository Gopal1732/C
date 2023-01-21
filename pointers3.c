#include<stdio.h>


void three(int a,int b, int *sum, int *product, int *average);

int main(){
     int x=17, y=32;
     int sum,product,average;

    three(x, y, &sum, &product, &average);

    printf("sum=%d ,product=%d ,average=%d",sum,product,average );  



    return 0;

}


//
void three(int a,int b, int *sum, int *product, int *average){
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;
 
}

