/* WAP to test whether a number entered through keyboard is ODD or EVEN */
#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    if ((a % 2) == 0)
        printf("\n%d is even\n", a);
    else
        printf("\n%d is odd\n", a);
    return 0;
}
