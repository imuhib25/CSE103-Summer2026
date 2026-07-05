#include<stdio.h>

int main ()
{
    int n,highest=0,lowest,passed_students=0,sum=0;
    double average;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if(arr[i] >= 40)
        {
            passed_students++;
        }
        if(i == 0)
        {
            highest = arr[i];
            lowest = arr[i];
        }
        else
        {
        if(arr[i] > highest)
        {
            highest = arr[i];
        }
         if(arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    }
    average = (double)sum/n;
    printf("Highest = %d\nLowest = %d\nAverage=%.2f\nPassed Students = %d\n",highest,lowest,average,passed_students);
    return 0;
}