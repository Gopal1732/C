#include<stdio.h>
int main(){
    int n,new,old,a,b;
    printf("enter number:");
    scanf("%d",&n);

    printf("enter old digit:");
    scanf("%d",&old);

    printf("enter new digit:");
    scanf("%d",&new);

     int rev=0;
    while(n>0){
        int x=n%10;
        if(x==old){
            x=new;
        }
        rev=rev*10+x;
        n=n/10;
    }
int c=0;
    while(rev>0){
         a=rev%10;
         c=c*10+a;
        rev=rev/10;
    }
    printf("%d",c);


    








    return 0;
}