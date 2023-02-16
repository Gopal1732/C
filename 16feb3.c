//highest value in array
#include<stdio.h>

int high(int a,int b);

int main(){
  int arr[100],i,n,maxarr1;
  printf("enter size of array:");
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  int maxarr=arr[0];
  for(int i=0;i<n;i++){
    maxarr=high(maxarr,arr[i]);
  }
  printf("Highest value in array:%d",maxarr);

 
  return 0;
}

int high(int a,int b){
    if(a > b){
       b=a;
    }
   
    return b;
   
}