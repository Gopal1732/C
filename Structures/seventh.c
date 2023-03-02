#include<stdio.h>
#include<string.h>

//user defined
// typedef struct computersciencestudent{
//     int roll;
//     float cgpa;
//     char name[100];
// }css;


// int main(){
//     css s1={17,9.8,"Gopal"};
//     printf("Student name = %s",s1.name);    
// }


//user defined
struct address{
    int houseNo;
    int block;
    char city[45];
    char state[50];
};

void printadd(struct address add);

int main(){
    struct address adds[2];

    printf("Enter information for person 1:");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter information for person 2:");
    scanf("%d",&adds[1].houseNo);
    scanf("%d",&adds[1].block);
    scanf("%s",&adds[1].city);
    scanf("%s",&adds[1].state);

    printadd(adds[0]);
    printadd(adds[1]);

   
    return 0;
}

void printadd(struct address add){
    printf("Address is : %d , %d , %s , %s \n", add.houseNo, add.block, add.city, add.state);
}

