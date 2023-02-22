#include<stdio.h>

int power(int base,int exp){
    if(exp==1){
        return base;
    }
    else{
        return base*power(base ,exp-1);
    }
}

int main(){
    int base,exp,res;
    printf("Enter base :");
    scanf("%d",&base);

    printf("Enter exp.. :");
    scanf("%d",&exp);

    printf("Power:%d ",power(base,exp));


}