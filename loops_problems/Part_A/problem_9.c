#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    scanf("%d", &n);

    if (n <= 1) isPrime = 0;  // 0 and 1 are not prime
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) printf("Prime Number\n");
    else printf("Not a Prime Number\n");

    return 0;
}
