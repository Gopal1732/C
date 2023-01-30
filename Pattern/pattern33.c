#include<stdio.h>
int main(){
    int i,j,n;
    for(int i=1;i<=5;i++){
        for(int s=5-i;s>=1;s--){
            printf(" ");

        }
        for(j=1;j<i;j++){
            printf("*");
        }
         for(j=1;j<=i;j++){
            printf("*");
        }

        printf("\n");
    }
}