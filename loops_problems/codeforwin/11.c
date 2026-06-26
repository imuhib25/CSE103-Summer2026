#include <stdio.h>

int main()
{
    int n, i, firstDigit, lastDigit;
    printf("Input number: ");
    scanf("%d", &n);
    lastDigit = n % 10;
    firstDigit = n;
    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }
    printf("First digit = %d\n", firstDigit);
    printf("Last digit = %d\n", lastDigit);
    return 0;
}