/* WAP in C to input 5 different subject marks then calculate
Total Marks, Average Marks, Percentage */
#include <stdio.h>

int main()
{
    float maths, phy, chem, eng, cs, total, avg, per;
    printf("\nEnter the marks of Maths, Physics, Chemistry, English & CS => ");
    scanf("%f %f %f %f %f", &maths, &phy, &chem, &eng, &cs);
    total = maths + phy + chem + eng + cs;
    avg = total / 5;
    per = (total / 500) * 100;
    printf("\nTotal Marks : %f", total);
    printf("\nAverage Marks : %f", avg);
    printf("\nPercentage : %f", per);
    return 0;
}
