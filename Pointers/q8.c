#include<stdio.h>



int main(){
    int i,*ptr,n;

    printf("enter size of an array:");
    scanf("%d",&n);
     
    int a[n];  
    printf("enter the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     
     ptr=&a[n-1];
    for(i=0;i<n;i++){
        printf("  %d  ",*ptr--);
        
    }
    

    return 0;
}
