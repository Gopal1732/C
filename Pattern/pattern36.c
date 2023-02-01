#include<stdio.h>

int main(){
    //  int n;
    //  scanf("%d",&n);
     int i=1;
    while(i<=5){
        int j=1;
        while(j<=i){
            printf("%c",64+i);
            j++;
        }
        i++;
        printf("\n");

    }
 }   