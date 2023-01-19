#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==1||i==n){
            for(int j=1;j<=n;j++){
                printf("%c",65+j-1);
            }
        }
       
        else{
            printf("A");
            for(int k=1;k<=n-2;k++){
                printf("_");
            }
            printf("%c", 65+n-1);



        }



 printf("\n");

    }


}