#include<stdio.h>

int main ()
{
    int x=1,n,sum;
    scanf("%d", &n);
    while (x<=n)
    {
        sum += x;
        x++;
    }
    printf("%d",sum);
    return 0;
}