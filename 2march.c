// //------------------------------------------------question-1--------------------------------------------------
#include<stdio.h>
void areasq(int s1){
    int s=s1*s1; 
    printf("%d\n",s);
}

void circle_1(float r){
    float c=(22/7)*r*r;
    printf("%.2f\n",c);
}

void rectangle(int l,int b){
    int r=l*b;
    printf("%d\n",r);
}

void parallel(int b1,int h){
    int p=b1*h;
    printf("%d\n",p);
}
int main(){
    areasq(2);
    circle_1(2);
    rectangle(2,2);
    parallel(2,4);
    return 0;
}



 
//  //---------------------------------------------question 2----------------------------------------------
// #include<stdio.h>
// #include<math.h>

// int main(){
//     int a,b,c,d;
//     float x1,x2;
//     printf("enter value of a:");
//     scanf("%d",&a);
//     printf("enter value of b:");
//     scanf("%d",&b);
//     printf("enter value of c:");
//     scanf("%d",&c);
//     d=b*b-(4*a*c);
//     if(d==0){
//         x1=-b/(2*a);
//         x2=x1;
//         printf("both roots are equal x1=%d x2=%d",x1,x2);
//     }
//     else if(d>0){
//         x1=(-b+sqrt(d))/(2*a);
//         x2=(-b+sqrt(d))/(2*a);
//         printf("roots are real x1=%d x2=%d",x1,x2);
//     } 
//     else{
//         printf("both roots are imaginary");
//     }   

//     return 0;   

// }


//-----------------------------------question 3-----------------------------------------------------
// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("value of sine:%f\n",sin(n));
//     printf("value of cosine:%f",cos(n));

//     return 0;
// }

//----------------------------------------question 4-------------------------------------------------
// #include<stdio.h>

// int main(){
//     float a,r,t;
//     float p;
//     printf("enter amount value:");
//     scanf("%f",&a);
//     printf("enter rate value:");
//     scanf("%f",&r);
//     printf("enter time value:");
//     scanf("%f",&t);
     
//     p=(a*r*t)/100;
//     printf("simple interest:%f",p);

//     return 0;
// }

