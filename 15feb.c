//argument with return value
#include<stdio.h>

int sum(int a,int b);

int main(){
    int x,y,z;
   printf("enter 1st value:");
   scanf("%d",&x);

   printf("\nenter 2nd value:");
   scanf("%d",&y);

   z=sum(x,y);
   printf("\nthe Sum is:%d",z);

}

//defination
int sum(int a,int b){
    int res;
    res=a+b;
    return res;
   
}

// prime number with argument and return value
