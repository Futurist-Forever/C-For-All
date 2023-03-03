/* WAP to add two time in hour, minute & second format entered through the
keyboard in the format hh:mm:ss. */

#include <stdio.h>

int main()
{
    int h1, h2, m1, m2, s1, s2, sumH, sumM, sumS;
    printf("\nEnter 1st time (hh:mm:ss) : ");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("\nEnter 2nd time (hh:mm:ss) : ");
    scanf("%d %d %d", &h2, &m2, &s2);

    sumS = s1 + s2;
    sumM = m1 + m2;
    sumH = h1 + h2;

    sumM += (sumS / 60);
    sumS %= 60;

    sumH += (sumM / 60);
    sumM %= 60;

    printf("\nAdded Time => %d : %d : %d \n", sumH, sumM, sumS);
    return 0;
}
