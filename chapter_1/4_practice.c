// Q4. Write a program to calculate simple interest for a set
// of values representing principle, no of years, and rate of interest.

#include <stdio.h>

int main()
{
    int principl = 100, rate = 4, years = 1;
    int simpleInterest = (principl * rate * years) / 100;
    printf("the value of simple interest is %d", simpleInterest);
    return 0;
}