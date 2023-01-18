//2nd question
#include<stdio.h>

void main(){
    char ch;
   
   for(int i=1;i<=5;i++){

    for(int j=1;j<=5;j++){
        char ch = 'Z'-i+1;
        printf("%c",ch);
    }
    printf("\n");
   }
}