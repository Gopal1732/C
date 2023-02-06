//
#include<stdio.h>
int main(){
    int n,sq,sum=0;
    printf("enter number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sq=i*i;
        printf("%d ",sq);
        sum=sum+sq;
    }
    
    printf("\nSum of natural n number:%d",sum);
}