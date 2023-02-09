#include<stdio.h>

int main(){
    int n,*ptr;
    int arr[20];
    
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("value of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    int max_=arr[0];
    for(int i=0;i<n;i++){
        ptr=&arr[i];
        if(*ptr >max_){
            max_=*ptr;
        }
        else{
            max_=max_;
        }

    }
    printf("\nHighest element is:%d",max_);
}