#include <stdio.h>

void main()
{
    int n1, n2, n3;
    printf("enter 1st number:");
    scanf("%d", &n1);

    printf("enter 2nd number:");
    scanf("%d", &n2);

    printf("enter any number:");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3)
    {
        printf("n1 is smallest");
    }
    else if(n2 < n1 && n2 < n3)
    {
        printf("n2 is smallest");
    }
    else if(n3 < n1 && n3 < n2)
    {
        printf("n3 is smallest");
    }
}
