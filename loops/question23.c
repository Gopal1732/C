#include<stdio.h>

int main(){
    int n,s=1,sum=0;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",s);
        sum=sum+s;
        s=(s*10)+1;   

    }
    printf("\nSum of series:%d",sum);
}