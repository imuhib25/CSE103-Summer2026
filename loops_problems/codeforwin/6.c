#include<stdio.h>

int main ()
{
    int n,i,sum=0;
    printf("Input upper limit: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum of natural numbers 1-%d: %d",n,sum);
    return 0;
    
}