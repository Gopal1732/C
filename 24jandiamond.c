
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int s=1;s<=n-i;s++){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d",j);   
//         }
//         for(int k=1;k<=i-1;k++){
//           //  int x=k-i;//
//             printf("%d",i-k);
//         }
//         printf("\n");


//     }
//      for(int i=n-1;i>=1;i--){
//         for(int s=1;s<=i-1;s++){
//             printf(" ");
//         }
//         for(int j=1;j<=n-i+1;j++){
//             printf("%d",j);   
//         }
//         for(int k=1;k<=n -i;k++){
//           //  int x=k-i;//
//             printf("%d",n - i - k + 1);
//         }
//         printf("\n");


//     }

    
// }



#include<stdio.h>

int main(){
    int n,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);   
        }
        for(int k=1;k<=i-1;k++){
          //  int x=k-i;//
            printf("%d",i-k);
        }
        printf("\n");


    } 
   for(int i=n-1;i>=1;i--){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);   
        }
        for(int k=1;k<=i-1;k++){
          //  int x=k-i;//
            printf("%d",i-k);
        }
        printf("\n");


    }
    
    return 0;
}