#include<stdio.h>

int main(){
    int n,b,c=0;
    int arr[100];
    int cr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      
  
    int even=0; 
    int odd =0;
    // for(int i=0;i<n;i++){
    //     c=0;
    //     while(arr[i]>0){
    //         count++;
    //         b=arr[i]%10;
    //         c=c*10+b;
    //         arr[i]=arr[i]/10;
    //     }
    //     cr[i]=c;
    // }

    // for(int i=0;i<n;i++){
    //     printf("\n %d",cr[i]);
    // }

    for(int i=0;i<5;i++){
         if(arr[i]%2==0){
        even++;
       
    }
    else{
      odd++;
    
    }

    }
    printf("Count of even number:%d",even);
    printf("\ncount of odd number:%d",odd);
    

} 