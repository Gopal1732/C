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
				
			
					
					if(ch=='A'||ch=='a'||ch=='+'||ch=='1'){
					res=var1+var2;
					printf("addition:%d",res);
			      	}
				    else if(ch=='S'||ch=='s'||ch=='-'||ch=='2'){
					res=var1-var2;
					printf("Subtraction:%d",res);
				    }
					 else if(ch=='M'||ch=='m'||ch=='*'||ch=='3'){
					res=var1*var2;
					printf("Multiplication:%d",res);
				    }
					else if (ch=='D'||ch=='d'||ch=='/'||ch=='4'){
					res=var1/var2;
					printf("divison:%f",res);
				    }
				    
				    else{
				    	printf("invalid ");
					}
			
}
