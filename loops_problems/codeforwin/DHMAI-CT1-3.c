#include <stdio.h>

int main() {
    int n, i;
    int arr[100];   // assuming max size 100
    int max, min;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with first element
    max = min = arr[0];

    // Traverse array to find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Output results
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}
