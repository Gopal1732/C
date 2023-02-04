//Write a program in C to read 10 numbers from keyboard and find their sum and average
#include<stdio.h>

int main(){
    int n,sum=0;
    float avg;
    for(int i=1;i<=10;i++){
             printf("enter number %d:",i);
        scanf("%d",&n);
        sum =sum+n;
    }
     printf("sumof no.:-%d",sum);
    avg=sum/10.0;
	printf("\nAverage:-%f",avg);
   

    return 0;
}
