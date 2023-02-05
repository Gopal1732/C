// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

#include<stdio.h>

int main(){
    int i,n;
    int d=9,sum=0;
    printf("number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       sum=sum+d;
       printf("%d  ",d);
       d=d*10+9;
    
    }
     printf("\nsum:%d",sum);
}   
     
