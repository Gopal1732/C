#include<stdio.h>
 int main(){
    FILE *fp;
    char strp[100];
    char drive[10];
        
    printf("Enter any data: ");
    gets(strp);

    printf("enter Drive name: ");
    gets(drive);
    
    fp = fopen(strcat(drive,":\\Filenew.txt"),"w");
     
    fprintf(fp,strp);
    fclose(fp);
    
    printf("File write sucessfully");
}