#include<stdio.h>

int main(){
   int n;
   char ch;
  
  do{
      printf("enter any number");
     scanf("%d",&n);

     int check=1;
      for(int i=2;i<=n/2;i++){
     if(n%i==0){
        printf("it's not a prime number");
        check=0;
        break;
       }
    
      }
      if(check==1){
       printf("its a prime number");
       }
     printf("\nenter y/n for comtinue:");
      fflush(stdin);
      scanf("%c",&ch);
   }
   while(ch=='y'|| ch=='Y');




}
