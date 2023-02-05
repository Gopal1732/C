//Write a program in C to make such a pattern like right angle triangle with number increased by 1.
#include<stdio.h>
int main(){
    int m;
    printf("enter digit:");
    scanf("%d",&m);
    
    int k=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
    return 0;
}