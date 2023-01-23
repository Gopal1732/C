#include<stdio.h>

int main(){
    int consumes,total,surcharge;

    printf("enter consumes:");
    scanf("%d",&consumes);
  
    if(consumes<=200){
         int total=consumes*3;
         int surcharge=total*.15 + total;
        printf("%d",surcharge);
    }
    else if(consumes>=201 && consumes<=400){
        int total=(consumes-200)*4+600;
        int surcharge=total*.15 +total;
        printf("%d",surcharge);
    }
    else if(consumes>=401){
       int  total=(consumes-400)*5.5+1400;
       int surcharge=total*.15 + total;
        printf("%d",surcharge);
    }
  
  
    
    return 0;
}



