#include<stdio.h>
#include<math.h>

int main ()
{
    int x,y;
    scanf("%d", &x);
    y = sqrt(x);
    if(y*y == x)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}