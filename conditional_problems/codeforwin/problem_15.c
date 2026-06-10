#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Input first side: ");
    scanf("%d",&a);
    printf("Input second side: ");
    scanf("%d", &b);
    printf("Input third side: ");
    scanf("%d", &c);
    if(a+b>c && b+c>a && c+a>b && a>0 && b>0 && c>0)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is invalid\n");
    }

    return 0;
}