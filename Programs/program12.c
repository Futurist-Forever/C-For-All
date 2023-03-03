/* WAP to calculate area of a triangle whose base and height are given. */
#include <stdio.h>

int main()
{
    float b, h, a;
    printf("\nEnter the values of base and height : ");
    scanf("%f %f", &b, &h);
    a = 0.5 * b * h;
    printf("\nArea of triangle: %f\n", a);
    return 0;
}
