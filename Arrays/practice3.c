#include<stdio.h>

int main(){
    // int age =22;
    // int *ptr = &age;
    // printf("ptr =%u",ptr);
    // ptr++;
    // printf("ptr =%u",ptr);

    // float price=123.00;
    // float *ptr = &price;
    // printf("ptr =%u",ptr);
    // ptr++;
    // printf("ptr =%u",ptr);

    // char star ='*';
    // char *ptr = &star;
    // printf("ptr =%u",ptr);
    // ptr++;
    // printf("ptr =%u",ptr);
   

   //tranverse of an array
   int aadhar[5];
   
   //input
   int *ptr= &aadhar[0];
   for(int i=0;i<5;i++){
    printf("%d ",i);
    scanf("%d",(ptr+i));
   }
    
   //output 
   for(int i=0;i<5;i++){
    printf(" %d ",*(ptr+i));
   }


}