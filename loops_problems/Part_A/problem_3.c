#include<stdio.h>

int main ()
{
    int x,y,i;
    scanf("%d %d", &x, &y);
    i = x;
    while (i<=y)
    {
        printf("%c ", 'A'+i-1);
        i++;
    }
    return 0;
}