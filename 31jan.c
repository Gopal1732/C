#include<stdio.h>

int main(){
    int a,b,c=0;
    printf("enter any number:");
    scanf("%d",&a);

    while(a>0){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("REVERSE:-%d",c);

    return 0;
}