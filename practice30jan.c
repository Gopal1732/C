#include<stdio.h>
int main(){
    // int i,start,last,cout;
    // printf("enter start poition");
    // scanf("%d",&start);

    //  printf("enter last poition");
    // scanf("%d",&last);

    // i=start;
    // while(i<=last){
    //     cout++;
    //     printf("\n Hello %d",i);
    //     i++;

    // }
    // printf("\ncout times:%d",cout);

    // int a,cout=0;
    // printf("enter any number:");
    // scanf("%d",&a);

    // while(a>0){
    //     cout=cout+1;
    //     a=a/10;
    // }
    // printf("cout:%d",cout);


    int a,temp,sum=0;
    printf("enter any number:");
    scanf("%d",&a);

    while(a>0){

        temp=a%10;
        sum=sum+temp;
        a=a/10;
    }
    printf("sum:%d",sum);


  return 0;

}