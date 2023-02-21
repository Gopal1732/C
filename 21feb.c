#include<stdio.h>

int show(int n){
    if(n==1){
        printf("gopal");
    }
    else{  
        printf("gopal\n");
        show(n-1);
    }
}


int main(){
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    show(a);
}