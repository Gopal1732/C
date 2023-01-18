# include<stdio.h>
int main(){
    int n=5;
    int p=0;
    int l=1;
    for(int i=1;i<=n;i++){
        p=p*10+l;
        printf("%d",p);
        l=l+2;
        printf("\n");

    }
}