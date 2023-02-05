//Write a program in C to make such a pattern like a pyramid with an asterisk.
#include<stdio.h>
int main(){
    int i,n;
    printf("enter digit:");
    scanf("%d",&n);
    
    
    for( i=1;i<=n;i++){
        for(int s=n-i;s>=1;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
