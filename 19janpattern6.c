#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int k=2*n-1;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",k);
           
        }
        k=k-2;
    
        printf("\n");

    }
    return 0;
}