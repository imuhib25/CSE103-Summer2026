#include<stdio.h>

int main ()
{
    char ch;
    scanf("%c",&ch);
    if(ch <= 'z' && ch >= 'a')
    {
        printf("Lowercase");
    }
    else if(ch <= 'Z' && ch >='A')
    {
        printf("Uppercase");
    }
    else
    {
        printf("Others");
    }
}
