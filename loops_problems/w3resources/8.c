#include<stdio.h>

int main ()
{
    int num=2,sum=0,limit=20;
    while (num <= limit)
    {
        sum += num*num*num;
        num += 2;
    }
    printf("%d",sum);
    
}