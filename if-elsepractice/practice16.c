//Write a C program to check whether a character is an alphabet, digit or special character.
#include<stdio.h>

int main(){
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z' )||(ch>='A' && ch<='Z')){
        printf("this is alphabet");
    }
    else if(ch>='0' && ch<='9'){
        printf("this is digit");
    }
    else{
        printf("this is a special character");
    }
    return 0;
    
}