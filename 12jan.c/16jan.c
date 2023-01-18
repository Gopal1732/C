//1st question
#include<stdio.h>
int main(){
    char ch;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            char ch='A'+j-1;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}


//2nd question
#include<stdio.h>
int main(){
    char ch;
   
   for(int i=1;i<=5;i++){

    for(int j=1;j<=5;j++){
        char ch = 'Z'-i+1;
        printf("%c",ch);
    }
    printf("\n");
   }
   return 0;
}



//question3
#include<stdio.h>
int main(){
    char ch;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i%2!=0){
                char ch='A'+2*j-2;
                printf("%c",ch);
            }
            else{
                char ch='I'-2*j+2;
                printf("%c",ch);
            }

            
        }
        printf("\n");
    }
    return 0;

}



//question4
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==5){
            for(int i=1;i<=5;i++){
                printf("X");
            }
        }
        else{
            for(int i=1;i<=5;i++){
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;
}



//question5
#include<stdio.h>
int main(){
    int ch;
    for(int i=1;i<=5;i++){
            if(i%2!=0){
                 for(int j=1;j<=5;j++){
                printf("%d",j);
            }
            }
        else{
            for(int j=5;j>=1;j--)
                printf("%d",j);
            }
        printf("\n");
    }
    return 0;
}



//question6
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i==1 || i==5){
            for(int j=1;j<=5;j++){
                printf("X");
            }
        }
        else{
            for(int j=1;j<=5;j++){
              if(j==1||j==5){
                    printf("X");
                }
              else{
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}