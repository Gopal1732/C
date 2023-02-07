#include<stdio.h>

int main(){
    int n,find;
    int arr[100];
    int cr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element for searching:");
    scanf("%d",&find);
      int cout=0;
     for(int i=0;i<5;i++){
        if(arr[i]==find){
            cout++;
            break;
        }
     } 
     if(cout>0){
        printf("found");

     }
     else{
        printf("Not found");
     }
  
   
} 