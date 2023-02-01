#include<stdio.h>

int main(){
    //  int n;
    //  scanf("%d",&n);
    //  int i=1;
    // while(i<=5){
    //     int j=i ,k=1;
    //     while(j<=5){
    //         printf("%c",64+k);
    //         k=k+1;
    //         j++;
    //     }
    //     i++;
    //     printf("\n");

    // }

    


    //  int n;
    //  scanf("%d",&n);
     int i=1;
    while(i<=5){
        int k=i;
        int j=1;
        while(j<=i){
            printf("%c",64+k);
            k=k+1;
            j++;
        }
        i++;
        printf("\n");

    }
    
 }   