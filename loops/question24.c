// Write a c program to check whether a given number is a perfect number or not.
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter number:");
    scanf("%d", &n);
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
            printf("%d ", i);
        }
    }
    printf("\nsum of divisor:%d", sum);
    if (sum == n)
    {
        printf("\nThe number is perfect");
    }
    else
    {
        printf("\nthe number is not perfect");
    }
}