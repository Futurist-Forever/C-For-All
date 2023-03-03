/* WAP to input any two distinct integers and display
the greatest of two integers. */
#include <stdio.h>

int main()
{
    int a, b;
    printf("\nEnter two integers a & b: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("\nLargest integer is %d\n", a);
    else
        printf("\nLargest integer is %d\n", b);
    return 0;
}
