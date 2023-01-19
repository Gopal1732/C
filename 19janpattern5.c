#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=1;s<=i-1;s++){
            printf(" ");
        }
        int k=2*n-1;
        for(int j=1;j<=n-i+1;j++){
            printf("%d",k);
            k=k-2;
        }
        printf("\n");

    }
    return 0;
}