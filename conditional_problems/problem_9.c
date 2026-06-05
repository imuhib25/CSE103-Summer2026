#include<stdio.h>

int main ()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a+b>c && b+c>a && c+a>b && a>0 && b>0 && c>0)
    {
        printf("Triangle!\n");
    }
    else{
        printf("Not a triangle!\n");
    }
}