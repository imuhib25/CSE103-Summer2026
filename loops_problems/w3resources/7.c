#include <stdio.h>
#include <string.h>

int main()
{
    char username[20];
    while (1)
    {
        printf("Enter a username (at least 8 characters long): ");
        scanf("%s", username);
        if (strlen(username) >= 8)
        {
            break;
        }
        else
        {
            printf("Error: Username must be at least 8 characters long.\n");
        }
        while (getchar() != '\n');
    }

    printf("Valid username entered: %s\n", username);

    return 0;
}