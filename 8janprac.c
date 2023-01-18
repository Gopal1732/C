#include<stdio.h>
int main(){
	char ch;
	printf("\nEnter any alphabet:");
	scanf("%c",&ch);
	
	if(ch=='A'||ch=='a'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
		printf("vowel");
	}
 	else{
 		printf("constant");
	 }
	
			
}
