#include<stdio.h>

int fibonacci(int num);

int main(){

    printf("%d",fibonacci(8));
    return 0;
}

int fibonacci(int num){
        if(num==0){
            return 0;

        }
        if (num==1)
        {
           return 1;
        }
   
    int fibn=fibonacci(num-1)+fibonacci(num-2);
    // printf(" fib of %d is %d\n",num,fibn);


     return fibn;
}