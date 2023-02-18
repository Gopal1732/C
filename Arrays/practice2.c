//enter price of three items and add gst to the items
#include<stdio.h>

int main(){
    float items[3];
    printf("enter 3 prices of items:");
    scanf("%f",&items[0]);
    scanf("%f",&items[1]);
    scanf("%f",&items[2]);

   

    printf("Total price 1st item = %f\n",items[0]+(0.18*items[0]));
    printf("Total price 2nd item = %f\n",items[1]+(0.18*items[1]));
    printf("Total price 3rd item = %f\n",items[2]+(0.18*items[2]));

    return 0;
}