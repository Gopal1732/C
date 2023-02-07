// Write a program in C to display the first n terms of Fibonacci series. The series is as follows:
// Fibonacci series 0 1 2 3 5 8 13 .....

#include<stdio.h>

int main(){
    int n;
    int t1=0,t2=1;
    printf("input number of terms:");
    scanf("%d",&n);

    printf("fibonacci series:");
    printf("%d %d ",t1,t2);
    for(int i=3;i<=n;i++){
        int t3=t2+t1;
        printf("%d ",t3);
        t1=t2;
        t2=t3;

    }
    
}