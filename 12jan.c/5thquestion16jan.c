question5
#include<stdio.h>

void main(){
    int ch;
    for(int i=1;i<=5;i++){
            if(i%2!=0){
                 for(int j=1;j<=5;j++){
                printf("%d",j);
            }
            }
        else{
            for(int j=5;j>=1;j--)
                printf("%d",j);
            }
        printf("\n");
    }
}