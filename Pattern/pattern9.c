#include <stdio.h>

int main()
{
    int n, k = 1;
    printf("enter number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            printf("%d", k);
            k = k + 1;
        }
        printf("\n");
    }
    return 0;
}