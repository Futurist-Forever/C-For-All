/* WAP to calculate perimeter of a circle. */
#include <stdio.h>

int main()
{
    float r, p;
    printf("\nEnter the radius of the circle => ");
    scanf("%f", &r);
    p = 2 * 3.14 * r;
    printf("\nPerimeter of circle : %f\n", p);
    return 0;
}
