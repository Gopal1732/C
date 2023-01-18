//-------------------------------------------question1-------------------------------------------
#include<stdio.h>
                                                                                
int main(){                                                                        //1
    for(int i=1;i<=5;i++){                                                         //12
        for(int j=1;j<=i;j++){                                                     //123
            printf("%d",j);                                                        //1234
        }                                                                          //12345
        printf("\n");                                                              //1234
    }                                                                              //123     
    for(int i=4;i>=1;i--){                                                         //12
        for(int j=1;j<=i;j++){                                                     //1
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


//---------------------------------------------------------question 2-----------------------------------
#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",6-j);
        }
        printf("\n");
    }
        for(int i=4;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",6-j);
        }
        printf("\n");
    }

    return 0;
}


//-------------------------------------------------question3--------------------------------------
#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+j-1;
            printf("%c",ch);
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--){
        for(int j=1;j<=i;j++){
            char ch='A'+j-1;
            printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}