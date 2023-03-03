/* WAP to convert given second into its equivalent
hour, minute and second as per the following format.
Example. 7560 second = 2 Hour, 27 Minute and 40 Second */

#include <stdio.h>

int main()
{
    long sec1, sec2, hr, min, t;
    printf("\nEnter time in seconds : ");
    scanf("%ld", &sec1);
    hr = sec1 / 3600;
    t = sec1 % 3600;
    min = t / 60;
    sec2 = t % 60;
    printf("\n\n%ld second = %ld Hour %ld Minute and %ld Second\n", sec1, hr, min, sec2);
    return 0;
}
