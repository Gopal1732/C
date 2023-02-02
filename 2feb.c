#include<stdio.h>

int main(){
    int n,temp,a;
    int b=0;
    int rev=0;
    printf("enter any number:");
    scanf("%d",&n);

   
    while(n>0){
        int temp=n%10;
        if(temp%2==0){
            rev=rev*10+temp;
        }
        n=n/10;
    }
 
    while(rev>0){
        a=rev%10;
        b=b*10+a;
        rev=rev/10;
    }
        printf("%d",b);
}