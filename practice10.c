#include<stdio.h>

float converttemp(float celsius);
  
int main(){
   
    float far=converttemp(37);
    printf("%f",far);
    


return 0;
}

float converttemp(float celsius){
    
    float far=celsius*(9/5)+32;
    
    return far;
}