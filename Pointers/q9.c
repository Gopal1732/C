#include<stdio.h>

int main(){
    int i;
    char *ptr;
    char alph[27];
     
     ptr=alph;
    for(i=0;i<26;i++){
        *ptr=i+'A';
        ptr++;
     }

   ptr=alph;
    for(i=0;i<26;i++){
        printf(" %c ",*ptr++);
    } 

    return 0;
}
