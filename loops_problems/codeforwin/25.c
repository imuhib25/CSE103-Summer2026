#include <stdio.h>

int main()
{
    int num1, num2, lcm;
    printf("Input number1:");
    scanf("%d", &num1);
    printf("Input number2:");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        for (int i = num1; 1; i++)
        {
            if (i % num1 == 0 && i % num2 == 0)
            {
                lcm = i;
                break;
            }
        }
    }
    else
    {
        for (int i = num2; 1; i++)
        {
            if (i % num1 == 0 && i % num2 == 0)
            {
                lcm = i;
                break;
            }
        }
    }
    printf("LCM = %d", lcm);
    return 0;
}