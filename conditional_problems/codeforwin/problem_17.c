#include<stdio.h>
#include<math.h>

int main ()
{
    float a,b,c, discriminant,root1,root2,imaginary;
    scanf("%f %f %f", &a,&b,&c);

    discriminant = b*b - 4 * a *c;

    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Root 1: %.2f\n",root1);
        printf("Root 2: %.2f\n",root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("Root : %.2f\n",root1);
    }
    else
    {
        root1 = root2 = -b / (2*a);
        imaginary = sqrt(-discriminant)/2*a;
        printf("Root 1: %.2f + i%.2f\n");
        printf("Root 2: %.2f - i%.2f\n");
    }
    return 0;
}