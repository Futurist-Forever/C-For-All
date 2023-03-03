/* WAP to convert a quantity in meter entered through keyboard into its
equivalent kilometre and metre as per the following format.
Example. 2430 = 2 km and 430 metre. */

#include <stdio.h>

int main()
{
    int q, km, m;
    printf("\nEnter a quantity in metre : ");
    scanf("%d", &q);
    km = q / 1000;
    m = q % 1000;
    printf("\n%d meter = %d km and %d meter\n", q, km, m);
    return 0;
}
