
//1st question
#include<stdio.h>
int main(){
    char ch;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            char ch='A'+j-1;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}