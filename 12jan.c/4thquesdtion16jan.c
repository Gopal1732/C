question4
#include<stdio.h>

void main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==5){
            for(int i=1;i<=5;i++){
                printf("X");
            }
        }
        else{
            for(int i=1;i<=5;i++){
                printf("*");
            }

        }
        printf("\n");
    }
}

