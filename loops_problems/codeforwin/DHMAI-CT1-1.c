#include<stdio.h>

char calculateGrade(int score);

int main ()
{
    int score;
    scanf ("%d", &score);
    if(score >= 0 && score <= 100)
    {
        calculateGrade(score);
    }
    else
    {
        printf("Invalid Input!");
    }
    char grade = calculateGrade(score);
    printf("%c", grade);
    return 0;
}

char calculateGrade(int score)
{
    char grade;
    if(score >= 80)
    {
        grade = 'A';
    }
    else if (score <= 79 && score >= 60)
    {
        grade = 'B';
    }
    else
    {
        grade = 'C';
    }
    return grade;
}
