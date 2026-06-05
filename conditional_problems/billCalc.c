#include <stdio.h>

int main()
{
    float bill = 0;
    int input;

    printf("Enter total units consumed: ");
    scanf("%d", &input);

    if(input <= 50)
    {
        bill = input * 0.5;
    }
    else if (input <= 150)
    {
        input = input-50;
        bill = (50*0.5) + (input*0.75);
    }
    else if (input <= 250)
    {
        input = input - 150;
        bill = (50*0.5) + (100*0.75) + (input * 1.20);
    }
    else
    {
        input = input - 250;
        bill = (50*0.5) + (100*0.75) + (100 * 1.20) + (input * 1.50);
    }
    bill += bill * 0.2;
    printf("Electricity Bill = Rs. %.2f\n", bill);
    return 0;
}