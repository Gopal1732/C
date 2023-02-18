//enter price of three items and add gst to the items
#include<stdio.h>

int main(){
    float items[3];
    printf("enter price of 1st:");
    scanf("%d",&items[0]);
     
    printf("enter price of 2nd:");
    scanf("%d",&items[1]);
     
    printf("enter price of 3rd:");
    scanf("%d",&items[2]);

   

    printf("1st item = %d , 2nd item= %d , 3rd item = %d ",item[0]+(0.18*items[0]),item[1]+(0.18*items[1]),item[2]+(0.18*items[2]));

    return 0;
}