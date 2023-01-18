//question6
#include<stdio.h>

void main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==5){
            for(int j=1;j<=5;j++){
                printf("X");
            }
        }
        else{
            for(int j=1;j<=5;j++){
              if(j==1||j==5){
                    printf("X");
                }
              else{
                    printf("*");
                }
              
            }

        }
        printf("\n");
    }
}