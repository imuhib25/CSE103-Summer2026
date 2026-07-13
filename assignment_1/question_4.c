#include <stdio.h>

int main()
{
    int N, eDB, dWB = 0, dEB = 0, total = 0, highest = 0, highest_day = 0, zero = 0;

    printf("Enter number of days (N): ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Invalid Input!");
        return 0;
    }

    int arr[N];
    printf("Enter daily expenses: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    printf("Enter expected daily budget: ");
    scanf("%d", &eDB);

    highest = arr[0];
    highest_day = 1;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] <= eDB)
            dWB++;
        else
            dEB++;

        if (arr[i] > highest)
        {
            highest = arr[i];
            highest_day = i + 1;
        }

        if (arr[i] == 0)
            zero++;
    }

    printf("Days within budget: %d\n", dWB);
    printf("Days exceeded budget: %d\n", dEB);
    printf("Total spent: %d\n", total);
    printf("Highest spending: Day %d (%d)\n", highest_day, highest);
    printf("Days with zero spending: %d\n", zero);

    return 0;
}
