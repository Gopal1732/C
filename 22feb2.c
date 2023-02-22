#include<stdio.h>

int div=2;
int prime(int n){
    if(div<n && n%div==0){
        return 0;
    }
    else if(div==n){
        return 1;
    }
    else{
        div++;
        prime(n); //recursive
    }
}

int main(){
    int num,ans;
    printf("Enter any number: ");
    scanf("%d",&num);

    ans=prime(num);
    if(ans==1){
        printf("Prime number");
    }
    else{
        printf("Not prime number");
    }

}

