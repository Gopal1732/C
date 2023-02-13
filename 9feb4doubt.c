#include<stdio.h>

int main(){
    int i,j,*ptr;
    int arr1size=5,arr2size=5;
    int arr[5]={10,20,30,40,50};
    int brr[5]={11,12,13,14,15};
    // crr[10]=arr[5]+brr[5];
    int arlsize=arr1size+arr2size;
    int crr[arlsize];
    

   
    // printf("\n\n----------------------pointers------------------------- \n  ");
    // //Pointers
    //   printf("\nValues of 1st array:");
    //  for(i=0;i<5;i++){
    //     ptr=&arr[i];
    //     printf(" %d ",*ptr);
      
    // }

    //  printf("\nValues of 2nd array:");
    // for(i=0;i<5;i++){
    //     ptr=&brr[i];
    //     printf(" %d ",*ptr);
      
    // }

    for(i=0;i<arr1size;i++){
        crr[i]=arr[i];
     }
     

    for(i=0,j=arr1size;i<arr2size && j<arlsize;i++ ,j++){
        crr[j]=brr[i];
       
      
    }
    
     for(i=0;i<arlsize;i++){
       printf(" %d ",crr[i]);
     }



// merge two array

}