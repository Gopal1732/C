#include<stdio.h>
#include<string.h>

void check(char str[],char ch);

int main(){
    char string[]="Gopaljana";
    char ch ='a';
    check(string,ch);

}
void check(char str[],char ch){
    for(int i=0;str[i] !='\0';i++){
            if(str[i]==ch){
                printf("character is present!");
                return;
            }
    }
    printf("character is not present");
}
