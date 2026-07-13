#include <stdio.h>

int main()
{
    int N;
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
    printf("Enter number of rolls (N): ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter roll results: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 1)
            n1++;
        if (arr[i] == 2)
            n2++;
        if (arr[i] == 3)
            n3++;
        if (arr[i] == 4)
            n4++;
        if (arr[i] == 5)
            n5++;
        if (arr[i] == 6)
            n6++;
    }

    printf("Number 1: %d\n", n1);
    printf("Number 2: %d\n", n2);
    printf("Number 3: %d\n", n3);
    printf("Number 4: %d\n", n4);
    printf("Number 5: %d\n", n5);
    printf("Number 6: %d\n", n6);

    return 0;
}
