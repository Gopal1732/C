Write a program in C to sort elements of an array in ascending order. 

 #include<stdio.h>

int main(){
    int n,i,j;
    int arr[100],tmp;
    
    printf("Input the number of element:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
 
 for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    printf("elements in a sorted ascending order");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }

    printf("\n \n");
}