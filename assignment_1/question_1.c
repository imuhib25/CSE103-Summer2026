#include <stdio.h>

int main()
{
    int n, x, y, total=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        total += x * y;
    }
    printf("Total Bill: %d\n", total);
    return 0;
}