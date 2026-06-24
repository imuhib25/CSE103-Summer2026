#include<stdio.h>

int main ()
{
    int n,i=0;
    printf("Input num: ");
    scanf("%d", &n);
    if(n == 0)
    {
        i = 1;
        printf("Number of digits: %d", i);
        return 0;
    }
    while(n != 0)
    {
        n /= 10;
        i++;
    }
    printf("Number of digits: %d", i);
    return 0;
}