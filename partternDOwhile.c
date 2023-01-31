#include<stdio.h>

int main(){
   int n;
   scanf("%d",&n);

//    //pattern1
//    int i=1;
//    while(i<=n){
//     int j=1;
//     while(j<=n){
//         printf("*");
//         j++;
//     }printf("\n");
//     i++;
//    }

      //pattern2
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n){
        printf("%d",i);
        j++;
    }printf("\n");
    i++;
   }

   return 0;

}