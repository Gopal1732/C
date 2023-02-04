//Write a program in C to display the n terms of odd natural number and their sum
#include<stdio.h>

// int main(){
//     int n,sum=0;
   
//     printf("number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//          if(i%2 !=0){
//             sum=sum+i;
//          }
//     }
//     printf("Sum:-%d",sum);

//     return 0;
// }

int main(){
    int n,sum=0;
   
    printf("number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+2*i-1;
    }
    printf("Sum:-%d",sum);

    return 0;
}


