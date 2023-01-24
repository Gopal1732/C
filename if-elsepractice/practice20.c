//Write a program in C to accept a grade and declare the equivalent description : Go to the editor

// Grade	Description
// E	Excellent
// V	Very Good
// G	Good
// A	Average
// F	Fail

#include<stdio.h>

int main(){
    char ch;
    printf("enter grade:");
    scanf("%c",&ch);

//through switch case:
    switch(ch){
        case 'A': printf("Average");
        break;

        case 'E': printf("Excellent");
        break;

        case 'v': printf("Very good");
        break;

        case 'G': printf("Good");
        break;

        case 'F': printf("Fail");
        break;

        default :
        printf("invalid grade");
    }

//through conditional if-else:
    if(ch =='E'){
        printf("excellent");
    }
    else if(ch =='V'){
        printf("Very good");
    }
    else if(ch =='G'){
        printf("good");
    }
     else if(ch =='A'){
        printf("Average");
    }
    else if(ch=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade found");
    }


    return 0;
}