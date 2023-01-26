// Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.
#include <stdio.h>

void main()
{
    int choice, r, l, w, b, h;
    float area;
    printf("enter choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        scanf("%d", &r);
        area = 3.14 * r * r;
        printf("circle:%f", area);
        break;

    case 2:
        scanf("%d %d", &l, &w);
        area = l * w;
        printf("reactangle:%f", area);
        break;

    case 3:
        scanf("%d %d", &b, &h);
        area = 0.5 * b * h;
        printf("Triangle:%f", area);
        break;

    default:
        printf("invalid input");
        break;
    }
}