#include<stdio.h>

int main ()
{
    int n,m=0;
    scanf("%d", &n);
    int arr[n];
    int even[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even[m] = arr[i];
            m++;
        }
    }
    for (int i = m-1; i >= 0; i--)
    {
        printf("%d ", even[i]);
    }
    
    
}