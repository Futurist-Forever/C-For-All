/* WAP to find centigrade for a given fahrenheit temperature. */
#include <stdio.h>

int main()
{
    float f, c;
    printf("\nEnter the temperature in fahrenheit scale => ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    printf("\nThe temperature in centigrade is: %0.2f\n", c);
    return 0;
}
