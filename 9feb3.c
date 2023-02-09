#include<stdio.h>

int main(){
    int i,*ptr,sum=0;
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

   
    printf("\n\n----------------------pointers------------------------- \n  ");
    //Pointers
     for(i=0;i<5;i++){

        ptr=&arr[i];
        printf("\nValues: %d",*ptr);
        sum=sum + *ptr;
      
    }
    printf("\nSum of array by using pointer:%d",sum);



}