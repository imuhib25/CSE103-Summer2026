#include <stdio.h>

int main()
{
    int phy, che, bio, math, com, percentage;
    char grade;
    printf("Input marks of five subjects: ");
    scanf("%d %d %d %d %d", &phy, &che, &bio, &math, &com);
    percentage = (phy + che + bio + math + com) * 100 / 500;
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    printf("Percentage = %d\nGrade %c", percentage, grade);
}