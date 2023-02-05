//  Write a program in C to display the n terms of harmonic series and their sum. Go to the editor
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

#include<stdio.h>

int main(){
    int i,n;
    float d,sum=0;
    printf("number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        d=1/(float)i;
        sum=sum+d;
        
        printf("\nsum of series upto%d terms:%f",i,sum);
         printf("\n");
    
    }
}   
     
