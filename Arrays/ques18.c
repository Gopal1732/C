// Write a program in C to find the sum of rows an columns of a Matrix.
#include<stdio.h>

int main(){
    int i,j,n;
    int arr[50][50],rsum[50],csum[50],sum=0;

    printf("input size of matrix:");
    scanf("%d",&n);
  

    printf("Enter element in matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
           
        }
    }

    printf("Matrix:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ",arr[i][j]);
        }printf("\n");
    }


  //sum of rows
    for(i=0;i<n;i++){
        rsum[i]=0;
        for(j=0;j<n;j++){

            rsum[i]=rsum[i]+arr[i][j];
           
        }
    }
    
    //sum of columns
    for(i=0;i<n;i++){
        csum[i]=0;
        for(j=0;j<n;j++){

            csum[i]=rsum[i]+arr[j][i];
           
        }
    }

    printf("The sum or rows and columns of the matrix is :\n");
      for(i=0;i<n;i++)
      {
	   for(j=0;j<n;j++)
	      printf("% 4d",arr[i][j]);
	   printf("% 8d",rsum[i]);
	   printf("\n");
       }
       printf("\n");
	    for(j=0;j<n;j++)
             {
	        printf("% 4d",csum[j]);
             }
            printf("\n\n"); 
}