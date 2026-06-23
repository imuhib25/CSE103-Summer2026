#include <stdio.h>

int main() {
    int a, b;

    while (1) {
        scanf("%d", &a);
        if (a == -1)
        {
            return 0;
        }
        scanf("%d", &b);
        printf("%d\n", a + b);
    }

    return 0;
}
