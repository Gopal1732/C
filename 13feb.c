#include<stdio.h>
#include<string.h>

int main(){
    char str1[50],str2[50];
    int size,z;
   
    printf("enter 1st string:");
   // scanf("%s",&str);
   gets(str1);

    printf("enter 2nd string:");
    gets(str2);

    puts(str1);
    printf("\n");
    puts(str2);

    printf("--------After Merging-------------\n");
    strcat(str1, str2);
    puts(str1);


    // z=strcmp(str1,str2);
    // if(z==0){
    //     printf("\nString match %d",z);
    // }
    // else{
    //     printf("\nString not match %d",z);

    // }


  //   strupr(str1); //convert string into upper case
 //   strlwr(str1); //convert string into lower case
 //   strrev(str1); //Reverse of a string
  // size=strlen(str1);


   // printf("%s",str1);
    // puts(str1);
    // printf("No of character's:%d",size);
}