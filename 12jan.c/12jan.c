#include<stdio.h>
#include<conio.h>

void main(){
    int i,sum=0;
    int oddcout=0,evencout=0;
    int oddsum=0,evensum=0;

//    for(i=1;i<10;i=i+2){
//     printf("\n%d",i);
//    }
//  for(i=1;i<10;i++){
//     sum=sum+i;
//     printf("\n%d",sum);
//  }

    // for(i=1;i<=10;i++)
    // {
    //     cout=cout+1;
    // }
    // printf("%d",cout);

    for(i=1;i<=10;i++){
        if(i%2==0){
            printf("\neven%d",i);
            evencout++;
            evensum=evensum+i;
        }
    }

    printf("\n%d",evencout);
    printf("\n%d",evensum);
   

        printf("\n\n");


    for(i=1;i<=10;i++){
        if(i%2!=0){
            printf("\nodd%d",i);
            oddcout++;
            oddsum=oddsum+i;
        }
    }
    printf("\n%d",oddcout);
    printf("\n%d",oddsum);







}