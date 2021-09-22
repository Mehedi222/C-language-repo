// Chapter 2: Practice Set
// Q1. Which of the following is invalid in c?
// 1. int a; b=a;

// 2. int v=3^3;

// 3. char dt= '21 Dec 2020' ;

// Q2. What data type will 3.0/8 – 2 return? {nornaly ar ans hoba data type double}

#include <stdio.h>

int main()
{
    int a;
    int b = a;               // valid
    int v = 3 ^ 3;           // valid
    char dt = '2';           // valid but '21' ati  singel letter hota hoba
    float d = (3.0 / 8 - 2); //  real number asba jar data type double ans hoba
    printf("%f\n", d);
    printf("%d\n", v);
    printf("%d\n", dt);
    printf("%d\n", b);
    return 0;
}