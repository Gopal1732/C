#include<stdio.h>

enum days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

int main(){
    enum days D;
    D=Tuesday;
    switch(D){
        case Sunday:
        printf("Today is Sunday %d",D);
        break;
         case Monday:
        printf("Today is Monday %d",D);
        break;
         case Tuesday:
        printf("Today is Tuesday %d",D);
         break;
         case Wednesday:
        printf("Today is Wednesday %d",D);
         break;
         case Thursday:
        printf("Today is Thursday %d",D);
         break;
         case Friday:
        printf("Today is Friday %d",D);
         break;
         case Saturday:
        printf("Today is Saturday %d",D);

    }
}

