#include <stdio.h>
int main()
{
	int num1, num2, num3;
	printf("enter 1st Number:");
	scanf("%d", &num1);

	printf("enter 2nd Number:");
	scanf("%d", &num2);

	printf("enter 3rd Number:");
	scanf("%d", &num3);

	if (num1 >= num2 && num1 >= num3)
	{
		printf("1st Number is highest that is %d", num1);

		if (num1 == num2)
		{
			printf(" \n Number1 and Number2 are same");
		}
		else if (num1 == num3)
		{
			printf(" \n Number1 and Number3 are same");
		}
	}

	else if (num2 >= num1 && num2 >= num3)
	{
		printf("2nd Number is highest that is %d", num2);
		if (num2 == num1)
		{
			printf("\n Number2 and Number1 are same");
		}
		else if (num2 == num3)
		{
			printf("\n Number2 and Number3 are same");
		}
	}

	else if (num3 >= num1 && num3 >= num2)
	{
		printf("3rd Number is highest that is %d", num3);
		if (num3 == num1)
		{
			printf("\n Number3 and Number1 are same");
		}
		else if (num3 == num2)
		{
			printf("\n Number3 and Number2 are same");
		}
	}

	return 0;
}