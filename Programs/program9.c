/* WAP to perform the addition of two integers & display the result */
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers to add :\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\nThe addition of %d and %d is %d\n", a, b, c);
    return 0;
}
