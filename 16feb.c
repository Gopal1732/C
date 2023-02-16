//check digit is palindrome or not
#include<stdio.h>

int main(){
  int temp=0,palin,b=0,n;
  printf("enter digit:");
  scanf("%d",&n);

 palin=n;
  while(n>0){
    temp=n%10;
    b=b*10+temp;
    n=n/10;
  }
  printf("%d",b);
  if(b==palin){
    printf("\nits a palindrome");
  }
  else{
    printf("\nit's not a palindrome");
  }
  return 0;
}