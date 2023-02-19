#include<stdio.h>

void  reversearr(int arr[],int n);
void printarr(int arr[],int n);
int main(){
    // int i,arr[5];

    // for(int i=0;i<5;i++){
    //     scanf("%d",&arr[i]);
    // }

    // for(int i=5-1;i>=0;i--){
    //     printf(" %d ",arr[i]);
    // }
    int arr[]={1,2,3,4,5};
    reversearr(arr,5);
    printarr(arr,5);
    return 0;

}

void printarr(int arr[],int n){
    for(int i=0;i<5;i++){
        printf(" %d ",arr[i]);

    }
}

void reversearr(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
    }
}