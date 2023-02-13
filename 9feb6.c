#include<stdio.h>

int main(){
    int n,*ptr,temp,reverse=1;
    int arr[20];
    
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("value of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    
    for(int i=0;i<n;i++){
        ptr=&arr[i];
        
        while(*ptr>0)
        temp=*ptr%10;
        reverse=reverse*10+temp;
        *ptr=*ptr/10;
        
        printf("\nHighest element is:%d",reverse);

    }
    // printf("\nHighest element is:%d",reverse);
}
