// #include<stdio.h>
// #include<conio.h>

// void main(){
//     int n1,n2,max,flag=1;

//     printf("enter any two positive number:");
//     scanf("%d %d",&n1,&n2);

//     max=(n1>n2)?n1:n2;

//     while(flag){
//         if(max%n1==0 && max%n2==0){
//             printf("The LCM of%d and %d is %d",n1,n2,max);
//             break;
//         }
//         ++max;
//     }

// }

#include <stdio.h>
int lcmCalculate(int a, int b);
 
int main()
{
    int n1, n2, lcmOf;
    printf(" Enter 1st number: ");
    scanf("%d", &n1);
    printf(" Enter 2nd number: ");
    scanf("%d", &n2);

    if(n1 >  n2){
         lcmOf = lcmCalculate(n2, n1);
    }
    else{
        lcmOf = lcmCalculate(n1, n2);
    }

    printf(" The LCM of %d and %d :%d\n\n", n1, n2, lcmOf);
    return 0;
}


int lcmCalculate(int a, int b){
    static int m = 0;
    m += b;

    if((m % a == 0) && (m % b == 0))
    {
        return m;
    }
    else
    {
        lcmCalculate(a, b);
    }
}
