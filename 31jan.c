#include<stdio.h>

int main(){
    int a,b,c=0;
    printf("enter any number:");
    scanf("%d",&a);
    
    int orgcopy=a;

    while(a>0){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    // printf("REVERSE:-%d",c);

    if(orgcopy==c){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }


    return 0;
}