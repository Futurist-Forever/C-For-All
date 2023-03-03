/* WAP to find the roots of a quadratic equation. */
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, real, imag, dis, i1, i2, r1, r2;
    printf("\nInput values for a, b and c => ");
    scanf("%f %f %f", &a, &b, &c);
    dis = b * b - 4 * a * c;
    if (dis == 0)
    {
        printf("\nThe Roots are Equal\n");
        r1 = r2 = -b / (2.0 * a);
        printf("\nRoots are %0.2f and %0.2f\n", r1, r2);
    }
    else if (dis > 0)
    {
        printf("\nThe Roots are real & unequal\n");
        r1 = (-b + sqrt(dis)) / (2.0 * a);
        r2 = (-b - sqrt(dis)) / (2.0 * a);
        printf("\nRoots are %0.2f and %0.2f\n", r1, r2);
    }
    else
    {
        printf("\nThe Roots are imaginary\n");
        real = -b / (2.0 * a);
        dis = -dis;
        imag = sqrt(dis) / (2.0 * a);
        printf("\nRoot1=%5.2f+i%5.2f\n", real, imag);
        printf("\nRoot2=%5.2f-i%5.2f\n", real, imag);
    }
    return 0;
}
