#include<stdio.h>

int div=2;
int prime(int n){
    if(n>div && n%div==0){
        return 0;
    }
    else if(div==n){
        return 1;
    }
    else{
        div++;
        prime(n);
    }
}

int main(){
    int a;
    printf("Enter any number:");
    scanf("%d",&a);

    int result=prime(a);
    if(result==1){
        printf("It's a prime number");
    }
    else{
        printf("It's not a prime number");
    }
}