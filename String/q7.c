#include<stdio.h>
#include<string.h>
#include<ctype.h>


void lowtoupr(char str[]);
void uprtolowr(char str[]);


int main(){
    char string[]="GOPALFJGFHRHRHY";
    // lowtoupr(string);
    uprtolowr(string);

}

// void lowtoupr(char str[]){
//     for(int i=0;str[i] !='\0';i++){
//         str[i]=str[i]-32;
//     }
//   puts(str);
// }

void uprtolowr(char str[]){
    for(int i=0;str[i] !='\0';i++){
        str[i]=str[i]+32;
    }
  puts(str);
}
