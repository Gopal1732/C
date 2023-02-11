// Write a program in C to separate odd and even integers in separate arrays.

#include<stdio.h>

int main(){
    int n,i,j=0,k=0;
    int arr[100],max,min;
    int arreven[100],arrodd[100];
    printf("Input the number of element:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            arreven[j] =arr[i];
            j++;
        }
        else{
            arrodd[k]=arr[i];
            k++;
        }
    }
    
     printf("Even Elements:");
    for(i=0;i<j;i++){
        printf("%d ",arreven[i]);
    }

    printf("\nodd Elements:");
    for(i=0;i<k;i++){
        printf("%d ",arrodd[i]);
    }
    printf("\n\n");

}