#include <stdio.h>

int main()
{
    int a, even;
    printf("enter any number:");
    scanf("%d", &a);

    while (a > 0)
    {
        if (a % 2 == 0)
        {
            even++;
        }
        printf("Hello");
    }
    printf("even no.:%d", even);
    return 0;
}
