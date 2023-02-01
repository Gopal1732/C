#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
   
    // for(int i=1;i<=3;i++){
    //     for(int j=i;j<i+3;j++){
    //        printf("%d",j);
    //     }
    //     printf("\n");

    // }
     int i=1;
    while(i<=n){
        int j=i;
        while(j<i+n){
            printf("%c",64+j);
            j++;
        }
        i++;
        printf("\n");

    }
}