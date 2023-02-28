#include<stdio.h>
 int main(){
    FILE *fp;
    char strp[100];
    
    fp=fopen("D:\\File.txt","w");
    
    fprintf(fp,"Gopal");
    fprintf(fp,strp);
    fclose(fp);
}