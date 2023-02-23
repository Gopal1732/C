#include<stdio.h>

int power(int a,int b){
    if(b==1){
        return a;
    }
    else{
        return a*power(a ,b-1);
    }
}

int main(){
    int n,pwr;
    printf("Enter number:");
    scanf("%d",&n);

    printf("Enter power:");
    scanf("%d",&pwr);

    printf("Power:%d ",power(n,pwr));


}