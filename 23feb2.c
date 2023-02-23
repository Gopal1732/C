#include<stdio.h>

enum days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

int main(){
    enum days d;
    d=Tuesday;
    switch(d){
        case Sunday:
        printf("Today is Sunday %d",d);
        break;
         case Monday:
        printf("Today is Monday %d",d);
        break;
         case Tuesday:
        printf("Today is Tuesday %d",d);
         break;
         case Wednesday:
        printf("Today is Wednesday %d",d);
         break;
         case Thursday:
        printf("Today is Thursday %d",d);
         break;
         case Friday:
        printf("Today is Friday %d",d);
         break;
         case Saturday:
        printf("Today is Saturday %d",d);

    }
}

