//Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
#include<stdio.h>

int main(){
    int n;
    printf("enter digit:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}