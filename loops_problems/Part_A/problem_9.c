#include <stdio.h>

int main() {
    int n, i=2, isPrime = 1;
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("Not a Prime Number\n");
        return 0;
    }

    while(i < n)
    {
        if(n % i == 0)
        {
            isPrime = 0;
        }
        i++;
    }
    if(isPrime == 0)
    {
        printf ("Not a Prime Number\n");
    }
    else
    {
        printf ("Prime Number\n");
    }

    return 0;
}
