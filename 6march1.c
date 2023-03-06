#include <stdio.h>

void main()
{
    int a[50];
    int i, n, sum=0;
	
    printf("Input size of array :");
    scanf("%d",&n);
   
    printf("Input array :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
	}

    for(i=0; i<n; i++)
    {
        sum += a[i];
    }

    printf("Sum of all elements stored in the array is : %d\n\n", sum);
}
