#include<stdio.h>

int main ()
{
    int n,i,sum;
    printf("Input upper range: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        if(i % 2 !=0)
        {
            sum += i;
        }
        i++;
    }
    printf("Sum of odd numbers 1-%d: %d",n,sum);
    return 0;
    
}