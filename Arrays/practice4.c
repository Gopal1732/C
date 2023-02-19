#include<stdio.h>
void printNumber(int arr[],int n);

int main(){
    int arr[]={12,87,67,45,987};
    printNumber(arr,5);
    return 0;

}

void printNumber(int arr[],int n){
  for(int i=0;i<n;i++){
    printf(" %d ",arr[i]);
  }


}