#include<stdio.h>

int main(){
    int i,n;
    int arr[n];
     scanf("%d",&n);
    int ar[n], br[n],cr[n];
   

    printf("enter first array:");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }  

    printf("enter second array:");
    for(int i=0;i<n;i++){
        scanf("\n%d",&br[i]);
    }

    for(int i=0;i<n;i++){
        cr[i]=br[i]+ar[i];
    }

    for(int i=0;i<n;i++){
        printf("array sum:%d   ",cr[i]);
    }
      
  
    

} 