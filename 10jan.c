#include<stdio.h>
int main(){
	int var1=17;
	int var2=5;
	int res;
	char ch;
	printf("\n press 1 for addition");
		printf("\n press 2 for subtraction");
			printf("\n press 3 for multiplication");
				printf("\n press 4 for division");
				
				printf("\nenter we choice:");
				scanf("%c",&ch);
				
				switch(ch){
					case 'A':
					case 'a':	
						res=var1+var2;
						printf("\n addition:%d",res);
						break;
					case 'B':		
					case 'b':
						res=var1-var2;
						printf("\n Subtraction:%d",res);
						break;
					case 'C':		
					case 'c':
						res=var1*var2;
						printf("\n Multiplication:%d",res);
						break;
					case 'D':		
					case 'd':
						res=var1/var2;
						printf("\n Divison:%d",res);
						break;
					default:
					    printf("\n invalid choice");	
					
				}
				
			
					
					
}
