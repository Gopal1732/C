#include<stdio.h>

int main(){
    int i,*ptr;
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    //array
    for(i=0;i<5;i++){
        printf("\nValues: %d",arr[i]);
        printf("\tAddress of: %d",&arr[i]);
    }

    printf("\n\n----------------------pointers------------------------- \n  ");
    //Pointers
     for(i=0;i<5;i++){

        ptr=&arr[i];
        printf("\nValues: %d",*ptr);
        printf("\tAddress of: %d",ptr);
    }



}