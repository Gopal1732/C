// Write a C program to determine whether a given number is prime or not.
 
 #include<stdio.h>
int main(){
    int n,check=0;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            check++;
        break;
        }
    }
    if(check==0 && n!=1){
        printf("No. is a prime number");
    }
    else{
        printf("not a prime number");
    }
}