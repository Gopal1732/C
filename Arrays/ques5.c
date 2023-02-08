// Write a program in C to count a total number of duplicate elements in an array.

#include<stdio.h>

int main(){
    int i,j,n,mm=1,ctr=0;
    int arr[100],arr2[100],arr3[100];
    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
        arr3[i]=0;
    }
 
 //mark the array is duplicate
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(arr[i]==arr2[j])
            {
                arr3[j]=mm;
                mm++;
            }
        }
        mm=1;
    }

    for(int i=0;i<n;i++){
        if(arr3[i]==2){
            ctr++;
        }
    }
    printf("the duplicate:%d", ctr);

}

