#include <stdio.h>

int main()
{
    int a, b, sum, n, i;
    scanf("%d", &n);
    
    i = 1;
    while (i <= n)
    {
       scanf("%d %d", &a, &b);
       sum = a+b;
       printf("%d\n",sum);
       i++;
    }
    
}