#include<stdio.h>

int main ()
{
    int n,x,found=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to search: ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            printf("%d found at position %d", x, i+1);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("%d not found in the array\n", x);
    }
    return 0;
}