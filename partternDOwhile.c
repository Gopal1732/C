#include<stdio.h>

int main(){
   int n;
   scanf("%d",&n);

//pattern1
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n){
        printf("*");
        j++;
    }printf("\n");
    i++;
   }



//pattern2
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n){
        printf("%d",i);
        j++;
    }printf("\n");
    i++;
   }




// pattern3
   int k=1;
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n){
        printf("%d",k);
        k=k+1;
        j++;
    }printf("\n");
    i++;
   }




//pattern4
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        printf("*");
        j++;
    }printf("\n");
    i++;
   }




//pattern5
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        printf("%d",i);
        j++;
    }printf("\n");
    i++;
   }





//pattern6
   int i=1;
   while(i<=n){
    int j=1,k=i;;
    while(j<=i){
        printf("%d",k);
        k=k+1;
        j++;
    }printf("\n");
    i++;
   }





// // pattern7
    int i=1;
    while(i<=n){
    int j=i;
    while(j>=1){
        printf("%d",j);
        j--;
    }printf("\n");
    i++;
   }





//pattern8
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n){
     printf("%c",i+64);
        j++;
    }printf("\n");
    i++;
   }

 

   return 0;

}