#include<stdio.h>
int main(){
int temp,n,b=0;
    char ch;
    do{
        printf("enter any digit:");
        scanf("%d",&n);
        while(n>0){
            temp=n%10;
            b=b*10+temp;
            n=n/10;
        }

        printf("Reverse of digit-%d\n",b);

        printf("\nDo u wanna continue... press(y/n)\n");
        fflush(stdin);
        scanf("%c",&ch);

    }
    while(ch=='Y' || ch=='y');   
}