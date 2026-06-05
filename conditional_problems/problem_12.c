#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Number\n");
    }
    else
    {
        printf("Others\n");
    }
    return 0;
}