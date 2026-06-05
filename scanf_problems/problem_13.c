#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;        // sides of the triangle
    float s, area;      // use float for s and area

    scanf("%d %d %d", &x, &y, &z);

    s = (x + y + z) / 2.0;   // divide by 2.0 to ensure float division
    area = sqrt(s * (s - x) * (s - y) * (s - z));

    printf("Area = %.2f\n", area);   // print with 2 decimal places
    return 0;
}
