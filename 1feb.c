#include<stdio.h>
int main(){
    // int i=1;
    // do{
    //     printf("hello%d\n",i);
    //     i++;
    // }
    // while(i<=5);



  //Sum-
    // int var1,var2,sum;
    // char ch;
    // do{
    //     printf("enter 1st value");
    //     scanf("%d",&var1);

    //     printf("enter 2nd value");
    //     scanf("%d",&var2);

    //     sum=var1+var2;

    //     printf("sum:-%d\n",sum);

    //     printf("\nDo u wanna continue... press(y/n)\n");
    //     fflush(stdin);
    //     scanf("%c",ch);


    // }
    // while(ch=='Y' || ch=='n');



 //principle:-
//  int pri,rate,time,amount;
//     char ch;
//     do{
//         printf("enter principle value:");
//         scanf("%d",&pri);

//         printf("enter rate value:");
//         scanf("%d",&rate);

//          printf("enter time value:");
//         scanf("%d",&time);
        

//         amount=(pri*rate*time)/100;

//         printf("sum:-%d\n",amount);

//         printf("\nDo u wanna continue... press(y/n)\n");
//         fflush(stdin);
//         scanf("%c",ch);


//     }
//     while(ch=='Y' || ch=='N');


 //reverse:-
 int temp,b,n;
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
        scanf("%c",ch);

    }
    while(ch=='Y' || ch=='N');   
}