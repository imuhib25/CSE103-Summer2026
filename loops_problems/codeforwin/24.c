#include <stdio.h>

int main()
{
    int num1, num2, hcf=1;
    printf("Input number1:");
    scanf("%d", &num1);
    printf("Input number2:");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        for (int i = 1; i <= num2; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                hcf = i;
            }
        }
    }
    else
    {
        for (int i = 1; i <= num1; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                hcf = i;
            }
        }
    }
    printf("HCF = %d", hcf);
    return 0;
}