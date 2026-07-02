#include <stdio.h>

int main()
{
    int arr[] = {10,20,30,40,50};
    int *ptr = arr;

    ptr++;
    (*ptr)++;
    ptr += 2;

    printf("%d, %d, %d\n", *ptr, *(ptr - 2), arr[1]);
}