#include<stdio.h>
#include<string.h>



int main(){
    // char firstname[50];
    // scanf("%s",firstname);
    // printf("Your name is:%s",firstname);

    // char fullname[100];
    // gets(fullname);

    // printf("the sentence is:");
    // puts(fullname);

    // int x=strlen(fullname);
    // printf("Length of string:%d",x);
    

    // char oldstring[]="HHHHZ";
    // char newstring[]="HHHHW";
    // // strcpy(oldstring,newstring);
    // // strcat(oldstring,newstring);
    //  printf("%d",strcmp(oldstring,newstring));

    // // puts(oldstring);

    // char str[1233];
    // char ch;
    // int i=0;

    // while(ch !='\n'){
    //     scanf("%c",&ch);
    //     str[i]=ch;
    //     i++;
    // }
    // str[i]='\0';
    // puts(str);


     char password[100];
     scanf("%s",password);

     char salt[100]="1234";

     char newpasswrd[200];
     strcpy(newpasswrd,password);
     strcat(newpasswrd,salt);
     puts(newpasswrd);
      




    return 0;
}
