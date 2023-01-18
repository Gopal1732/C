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
