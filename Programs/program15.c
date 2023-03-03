/* WAP to convert temperature from centigrade to fahrenheit scale. */
#include <stdio.h>

int main()
{
    float c, f;
    printf("\nEnter the temperature in centigrade scale => ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("\nThe temperature in fahrenheit is: %0.2f\n", f);
    return 0;
}
