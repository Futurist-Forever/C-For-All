/* WAP to subtract a number from another number and display the result. */
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter two integers a and b : ");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("\n %d - %d = %d\n", a, b, c);
    return 0;
}
