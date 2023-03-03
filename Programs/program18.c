/* WAP to convert given paisa into its equivalent rupee and
paisa as per the following format.
Example 550 paisa = 5 Rupee and 50 paisa */

#include <stdio.h>

int main()
{
    int p, p1, r;
    printf("\nEnter paisa = ");
    scanf("%d", &p);
    r = p / 100;
    p1 = p % 100;
    printf("\n%d paisa = %d rupees and %d paisa\n", p, r, p1);
    return 0;
}
