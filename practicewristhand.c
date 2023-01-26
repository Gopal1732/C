#include<stdio.h>

int main(){
    int n,h;
    scanf("%d %d",&n,&h);

    int r=n;

    if(h>=n){
        printf("%d",r);
    }
    else if(h<n){
        printf("%d",(n-h)+r);
    }

    return 0;
}

