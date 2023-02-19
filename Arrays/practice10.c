#include<stdio.h>

int main(){
    char arr[1000];

    for(int i=0;i<10;i++){
        scanf("%c",&arr[i]);
    }
    
    int count=0;
    for(int i=0;i<510;i++){
        if(arr[i]=='x'){
            count++;
        }
    }
    printf(" number %d",count);    
}