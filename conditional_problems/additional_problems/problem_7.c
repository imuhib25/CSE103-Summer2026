#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x < y && x < z)
    {
        printf("Lowest: %d\n", x);
        if (y < z)
        {
            printf("Medium: %d\n", y);
            printf("Highest: %d\n", z);
        }
        else
        {
            printf("Medium: %d\n", z);
            printf("Highest: %d\n", y);
        }
    }
    else if (y < x && y < z)
    {
        printf("Lowest: %d\n", y);
        if (x < z)
        {
            printf("Medium: %d\n", x);
            printf("Highest: %d\n", z);
        }
        else
        {
            printf("Medium: %d\n", z);
            printf("Highest: %d\n", x);
        }
    }
    else
    {
        printf("%d\n", z);
        if (x < y)
        {
            printf("Medium: %d\n", x);
            printf("Highest: %d\n", y);
        }
        else
        {
            printf("Medium: %d\n", y);
            printf("Highest: %d\n", x);
        }
    }
    return 0;
}