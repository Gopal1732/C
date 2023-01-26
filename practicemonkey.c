#include<stdio.h>

void main(){
    int n,k,j,m,p,left;
    float atebanana=0.0,atepeanut=0.0;
    scanf("%d %d %d %d %d",&n,&k,&j,&m,&p);

    if(n<0||m<0||k<0||j<0||p<0){
        printf("invalid input");
    }
    else{
        if(k>0){
            atebanana=(float)m/k;
        }
        if(j>0){
            atepeanut=(float)p/j;
        }
        left=n-atebanana-atepeanut;
        printf("no.of monkey left on tree%d",left);
    }

}