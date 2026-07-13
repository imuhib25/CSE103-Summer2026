#include <stdio.h>

int main()
{
    int n, total = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            printf("Student %d shakes hands with Student %d\n", i, j);
            total++;
        }
    }
    printf("Total Handshakes: %d\n", total);
    return 0;
}