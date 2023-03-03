/* WAP to swap two integer numbers without using third variable. */
#include <stdio.h>

int main()
{
    int a, b;
    printf("\nEnter two integers a and b : ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping a = %d and b = %d \n", a, b);
    return 0;
}
