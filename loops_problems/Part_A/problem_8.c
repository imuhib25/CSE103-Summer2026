#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    if (n == 0) count = 1;  // special case for 0
    else {
        while (n != 0) {
            count++;
            n /= 10;
        }
    }

    printf("%d\n", count);
    return 0;
}
