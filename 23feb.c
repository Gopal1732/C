#include<stdio.h>

// enum weekdays{Sunday=15,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
enum months{jan,feb,march,april,may,june,july,august,sept,oct,nov,dec};
int main(){
    // enum weekdays w;
    // w=Tuesday;
    // printf("The value of w is %d",w);

    int i;
    for(i=jan;i<=dec;i++){
        printf("%d ",i);
    }

}

