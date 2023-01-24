//Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charge are as follow :

// Unit	Charge/unit
// upto 199	@1.20
// 200 and above but less than 400	@1.50
// 400 and above but less than 600	@1.80
// 600 and above	@2.00

#include<stdio.h>

int main(){
    int unit;
    float charge,amount,total_amount,surcharge=0;
    printf("enter unit:");
    scanf("%d",&unit);

    if (unit<199){
       charge=1.20;
    }
    else if (unit>=200 && unit<400){
        charge=1.50;
    }
     else if (unit>=400 && unit<600){
        charge=1.80;
    }
     else{
        charge=2.00;
    }
     
     amount=unit*charge;
     printf("Amount:%f\n",amount);
    

     if (amount>300){
        surcharge=amount*.15;
        total_amount=amount+surcharge;
        printf("surcharge=%f \ntotal amount:%f ",surcharge,total_amount);
    }
    if(total_amount<100){
        total_amount=100;
        printf("Total_amount:%f",total_amount);
    }


     return 0;
}
