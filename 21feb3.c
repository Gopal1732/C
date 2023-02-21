#include<stdio.h>

int main(){
    int num;
    printf("enter any number for factorial: ");
    scanf("%d",&num);
    printf("factorial of %d is %d",num,fact(num));
}

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
    int fact1=fact(n-1);
    int factn=fact1*n;
    return factn;
    }
    
}
