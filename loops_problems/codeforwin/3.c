#include<stdio.h>

int main ()
{
    char ch;
    int i = 1;
    while (i <= 26)
    {
        printf("%c ", 'a' + i - 1);
        i++;
    }
    return 0;
    
}