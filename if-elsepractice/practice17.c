// Write a C program to check whether an alphabet is a vowel or consonant. 
#include<stdio.h>

int main(){
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("this is vowels");
    }
   
    else{
        printf("this is a constants");
    }
    return 0;
    
}