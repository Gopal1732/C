#include<stdio.h>
#include<string.h>
#include<ctype.h>


void vowels(char str[]);

int main(){
    char string[]="Gopaljanaqui";
    vowels(string);

}
void vowels(char str[]){
    for(int i=0;str[i] !='\0';i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i]=toupper(str[i]);
        }
    }
  puts(str);
}
