#include <stdio.h>

int main()
{
    int n;
    printf("Input N: ");
    scanf("%d", &n);
    printf("Natural numbers from %d-1 in reverse: \n", n);
    while (n != 0)
    {
        printf("%d ", n);
        n--;
    }
    printf("\n");
    return 0;
}