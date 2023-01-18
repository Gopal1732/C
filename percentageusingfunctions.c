#include<stdio.h>

float calpercentage(float science,float math,float sanskrit);

int main(){
float science=24;
float math=76;
float sanskrit=58;
 
   float per=calpercentage(science,math,sanskrit);
   printf("%f",per);
    
    return 0;

}

float calpercentage(float science,float math,float sanskrit){
    
    float per=(science+math+sanskrit)/300*100;

    return per;
}



