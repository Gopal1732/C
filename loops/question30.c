//  Write a program in C to display the such a pattern for n number of rows using a number which will start with the number 1 and the first and a last number of each row will be 1.

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
      
        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");

    }
}