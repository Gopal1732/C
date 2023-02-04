//Write a program in C to display the cube of the number upto given an integer.

#include<stdio.h>

int main(){
    int n,sum=0;
    int cube;

    printf("Enter input number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            printf("enter number %d:",i);
        
        cube=i*i*i;
        printf("Cube:-%d\n",cube);
    }

    return 0;
}
