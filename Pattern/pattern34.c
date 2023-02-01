#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i=1,k=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            printf("%c",64+k);
            k=k+1;
            j++;
        }
        i++;
        printf("\n");

    }
}