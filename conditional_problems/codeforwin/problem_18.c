#include <stdio.h>

int main()
{
    int costPrice, sellingPrice, profit;
    printf("Input cost price: ");
    scanf("%d", &costPrice);
    printf("Input selling price: ");
    scanf("%d", &sellingPrice);
    if (sellingPrice > costPrice)
    {
        printf("Profit: %d", sellingPrice - costPrice);
    }
    else
    {
        printf("No Profit!");
    }
}