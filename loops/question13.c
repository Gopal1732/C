//Write a program in C to make such a pattern like right angle triangle with number increased by 1.
#include<stdio.h>
int main(){
    int i,n;
    printf("enter digit:");
    scanf("%d",&n);
    
    int k=1;
    for( i=1;i<=n;i++){
        for(int spac=n-i;spac>=1;spac--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k=k+1;
        }
        printf("\n");
    }
    return 0;
}
