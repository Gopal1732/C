#include<stdio.h>
#include<conio.h>

int main(){
	
//	int n;
//	printf("enter your age");
//	scanf("%d",&n);
//	
//	if(n>15){
//		printf("eligible for vote");
//	}
//	else{
//		printf("ur are underage");
//	}
   int n;
   char ch;
   float f;
   
   printf("enter any character");
   
   scanf("%c",&ch);
   if(ch>=65 && ch<=90){
   	 printf("%c",ch+32);
   }
   else{
   	printf("%c",ch-32);
   	
   }
   
    
    


}
