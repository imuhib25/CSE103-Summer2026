#include <stdio.h>

int main()
{
    int n, even;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        even = n + 1;
    }
    else
    {
        even = n;
    }
    printf("%d\n", even);
    return 0;
}