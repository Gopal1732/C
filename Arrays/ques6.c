// Write a program in C to print all unique elements in an array.
#include<stdio.h>

int main(){
    int n,i,j,k;
    int arr[100],ctr=0;
    printf("Input the number of element:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

   for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(arr[i]==arr[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr[i]);
        }
    }
       printf("\n\n");


}