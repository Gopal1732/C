//  Write a program in C to display the such a pattern like pyramid using the alphabet.


#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("%c",j+64);
        }
      
        for(int j=i-1;j>=1;j--){
            printf("%c",j+64);
        }
        printf("\n");

    }
}