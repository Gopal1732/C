// Write a program in C to display the number in reverse order

#include<stdio.h>

int main(){
    int temp,n,rev=0;
    printf("Enter any number:");
    scanf("%d",&n);
    
    int pal=n;
    while(n>0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    printf("Reverse of number:%d",rev);

    if(rev==pal){
        printf("\npalindrome number");
    }
    else{
        printf("\nnot a palindrome no.");
    }
    

}