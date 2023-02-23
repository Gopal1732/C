#include<stdio.h>

void Evenodd(int store,int a);

int main(){
    int a;
    printf("Input th range to print:");
    scanf("%d",&a);

    printf("Even number:");
    Evenodd(2,a);

    printf("\nodd number:");
    Evenodd(1,a);

    return 0;

}

void Evenodd(int store,int a){
    if(store>a)
        return;
        printf("%d ",store);
        Evenodd(store+2 ,a);

}
