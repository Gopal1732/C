#include<stdio.h>
 int main(){
    FILE *fp;
    char strp[100];
    
    fp=fopen("D:\\File2.txt","w");
    
    printf("Enter any data: ");
    gets(strp);

    fprintf(fp,strp);
    fclose(fp);

    printf("File write sucessfully");
}