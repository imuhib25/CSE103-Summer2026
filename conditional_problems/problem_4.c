#include<stdio.h>

int main()
{
    int number;
    printf("Welcome to the Odd/Even Number finder\nEnter your number: ");
    scanf("%d", &number);
    if(number % 2 == 0)
    {
        printf("\n\n%d is an Even number\n", number);
    }
    else
    {
        printf("\n\n%d is an Odd number\n", number);
    }
    printf("\n\n\n****This program is developed by Intisar Muhib (CSE, EWU)****\n\n\n");
   return 0;
}
