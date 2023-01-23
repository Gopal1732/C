//Write a C program to find the eligibility of admission for a professional course based on the following criteria: 
#include<stdio.h>

int main(){
    int maths,physics,chemistry ,total,total1;
    printf("enter marks in maths:");
    scanf("%d",&maths);
    printf("enter marks in physics:");
    scanf("%d",&physics);
    printf("enter marks in chemistry:");
    scanf("%d",&chemistry);
    total=maths+physics+chemistry;
    total1=maths+physics;
     if(total>=190 || total1>=140){
        printf("total marks in all subject:%d total marks in maths and physics:%d the candidate is eligible",total,total1);
     }
     else{
        printf("total marks in all subject:%d total marks in maths and physics:%d the candidate is not eligible",total,total1);

     }

    return 0;
}