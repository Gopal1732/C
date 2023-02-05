// Write a program in C to print the Floyd's Triangle.

#include<stdio.h>

int main(){
    int n;
    printf("enter digit:");
    scanf("%d",&n);

    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",k);
          k=(k+1)%2;
        } 
        printf("\n");
    }
  return 0;
}