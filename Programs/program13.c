/* WAP to swap two integer numbers using third variable. */
#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("\nEnter two integers a and b : ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping, a = %d and b = %d\n", a, b);
    return 0;
}
