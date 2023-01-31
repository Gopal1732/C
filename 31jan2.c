#include<stdio.h>

int main(){
    int n,i=0;
   scanf("%d",&n);
  
   while(i<=n){
    int j=0;
    while(j<n-i){
        printf("%d",n-j-i);
        j++;
    }
    i++;
    printf("\n");
   }
   return 0;
}