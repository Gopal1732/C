#include<stdio.h>

void oddcount(int arr[],int n);

int main(){
  int n;
  scanf("%d",&n);

  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  oddcount(arr,n);
}

void oddcount(int arr[],int n){
    int i;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 !=0){
        count++;
    }
    }
    printf("%d",count);
}