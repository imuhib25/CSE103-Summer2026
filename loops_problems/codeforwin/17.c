#include <stdio.h>

int main()
{
    int n, isPrime = 1;
    printf("Input any number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1 && n > 1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is composite number", n);
    }
    if (isPrime == 1 && n > 1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is composite number", n);
    }
    return 0; 
}