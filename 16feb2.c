//reverse of a string without using library function

#include<stdio.h>
#include<string.h> 

int main(){
    int i,n;
  char ch[50];
  
  printf("enter character:");
  gets(ch);

   n=strlen(ch); 


  for(int i=n-1;i>=0;i--){
     printf("%c",ch[i]);
  }

  
  
  
  

  return 0;
}