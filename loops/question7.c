 //Write a program in C to display the multiplication table vertically from 1 to n. 

#include<stdio.h>

int main(){
    int n,m;
   
    printf("table to be calculated:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        for(int j=1;j<=n;j++){
             m=i*j;
        printf(" %d x %d :-%d",j,i,m);
        }
        printf("\n");
       
    }

    return 0;
}
