#include<stdio.h>
//find the highest value three value
//take 5 marks 
#include<stdio.h>
int main(){
	int a,b,c,d,e;
	int sum;
	int percentage;
	printf("enter marks of maths:");
	scanf("%d",&a);
	if(a<=100 && a>=33){
		printf("pass");
	}
	 else{
		printf("fail");
	  }	
	
	
	printf("\nenter marks of english:");
	scanf("%d",&b);
	if(b<=100 && b>=33){
		printf("pass");
	}
	else{
		printf("fail");
	}	
	
	
	printf("\nenter marks of gk:");
	scanf("%d",&c);
	if(c<=100 && c>=33){
		printf("pass");
	}
	else{
		printf("fail");
	}	
	
	printf("\nenter marks of science:");
	scanf("%d",&d);
	if(d<=100 && d>=33){
		printf("pass");
	}
	else{
		printf("fail");
	}	

	
	printf("\nenter marks of hindi:");
	scanf("%d",&e);
	if(e<=100 && e>=33){
		printf("pass");
		}
	else{
		printf("fail");
	}	
	
	sum=a+b+c+d+e;
	percentage = (sum * 100) / 500;
	printf("\n result:%d",percentage);
	
	if(percentage>=91 && percentage<=100){
	    printf("\npercentage is %d and Grade is O  and pass",percentage);
	}
		else if(percentage>=81 && percentage<=90){
	    printf("\npercentage is %d and Grade is A1 and pass",percentage);
	}
		else if(percentage>=71 && percentage<=80){
	    printf("\npercentage is %d and Grade is A and pass",percentage);
	}
		else if(percentage>=61 && percentage<=70){
	    printf("\npercentage is %d and Grade is B and pass",percentage);
	}
		else if(percentage>=51 && percentage<=60){
	    printf("\npercentage is %d and Grade is C and pass ",percentage);
	}
	else{
	    printf("\nfail");
	}
	
}

