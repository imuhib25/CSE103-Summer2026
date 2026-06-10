#include <stdio.h>

int main()
{
    int note_500, note_100, note_50, note_20, note_10, note_5, note_2, note_1;
    int input, n;
    printf("Input amount: ");
    scanf("%d", &input);
    if (input >= 500)
    {
        note_500 = input / 500;
        input %= 500;
        if (input >= 100)
        {
            note_100 = input / 100;
            input %= 100;
            if (input >= 50)
            {
                note_50 = input / 50;
                input %= 50;
                if (input >= 20)
                {
                    note_20 = input / 20;
                    input %= 20;
                    if (input >= 10)
                    {
                        note_10 = input / 10;
                        input %= 10;
                        if (input >= 5)
                        {
                            note_5 = input / 5;
                            input %= 5;
                            if(input >= 2)
                            {
                                note_2 = input/2;
                                input %= 2;
                                if(input == 1)
                                {
                                    note_1 = 1;
                                    input =0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("Total number of notes: 500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d",note_500,note_100,note_50,note_20,note_10,note_5,note_2,note_1);
    return 0;
}