// Write a program to find out whether a student is pass or fail; if it requires a total of 40%
// and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.

#include <stdio.h>

int main()
{
    int physics, cheistry, math;
    float total;
    printf("Enter your physics marks\n");
    scanf("%d", &physics);

    printf("Enter your cheistry marks\n");
    scanf("%d", &cheistry);

    printf("Enter your math marks\n");
    scanf("%d", &math);
    total = (physics + cheistry + math) / 3;
    if ((total < 40) || physics < 33 || cheistry < 33 || math < 33) // hisab ta right to left korla subida basi
    {
        printf("your total percentage is %f you are fail\n", total);
    }
    else
    {
        printf("your total percentage is %f you are pass\n", total);
    }

    return 0;
}