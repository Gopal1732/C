#include<stdio.h>

int main(){
    int t,f,v,w;

    printf("entervehicles and wheels");
    scanf("%d %d",&v,&w);

    //t+f=v;
    //4*f+2*t=w;
    t=((4*v)-w)/2;
    f=(w-(2*v))/2;

    if(w<2||w<=v||t<0||f<0){
        printf("invalid input");
    }
    else{
        printf("two-wheeler:%d",t);
         printf("four wheeler:%d",f);
    }
   
   return 0;

}