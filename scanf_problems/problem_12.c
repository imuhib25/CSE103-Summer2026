#include <stdio.h>
#define PI 3.1416   // define constant

int main()
{
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area = %.2f\n", area);

    return 0;
}
