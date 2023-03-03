/* WAP to calculate area of a circle. */
#include <stdio.h>

int main()
{
    float radius, area;
    printf("\nEnter the radius of the circle => ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("\nArea of circle: %f\n", area);
    return 0;
}
