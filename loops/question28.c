//Write a program in C to find the prime numbers within a range of numbers.
 
 #include<stdio.h>
int main(){
    int n,start,end,check;
    printf("enter start range");
    scanf("%d",&start);

    printf("enter end range");
    scanf("%d",&end);


     printf("All prime numbers:");
    for(int n=start;n<=end;n++){
        check =0;
        for(int i=2;i<=n/2;i++){
        if(n%i==0){
            check++;
        break;
        }
        }
        if(check==0 && n!=1)
        printf("%d ",n);
    
    }  
    printf("\n");
}