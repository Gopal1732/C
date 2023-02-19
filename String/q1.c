#include<stdio.h>

void print(char arr[]);


int main(){
    // char name[]={'g','o','p','a','l','\o'};
    char firstname[]="Gopal";
    char lastname[]="Jana";

    print(firstname);
    print(lastname);


    return 0;
}

void print(char arr[]){
    for(int i=0; arr[i] !='\0';i++){
        printf("%c",arr[i]);
    }printf("\n");
}