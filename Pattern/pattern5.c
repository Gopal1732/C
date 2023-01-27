#include<stdio.h>

int main(){
    int i,j,n,s;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=i;s++){
            printf(" ");
        }
        for(j=1;j<=n-i+1;j++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}