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
    printf("Sum of first and last digit = %d\n", firstDigit + lastDigit);
    return 0;
}