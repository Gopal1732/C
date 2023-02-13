#include<stdio.h>

struct employee{
    int empid;
    char empname[20];
    float empsalary;

}

main(){
    struct employee ref;

    printf("enter employee id:\n");
    scanf("%d",&ref.empid);
    printf("enter employee name:\n");
    fflush(stdin);
    gets(ref.empname);

    printf("enter employee salary:");
    scanf("%f",&ref.empsalary);
    
    printf("Employee id:%d\n",ref.empid);
    printf("Employee name:%c\n",ref.empname);
    printf("Employee salary:%f",ref.empsalary);


}