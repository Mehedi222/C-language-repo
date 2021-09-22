#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;

    printf("the value of a + b is: %d\n", a + b);
    printf("the value of  a - b  is: %d\n", a - b);
    printf("the value of  a * b  is: %d\n", a * b);
    printf("the value of  a / b  is: %d\n", b / a);

    int z;
    z = a * b; //  [legal]
    // b * a = z; [illegl]
    printf("the value of  z  is: %d\n", z);

    printf("5 when divided by 2 levels a reminder of %d\n", 5 % 2);
    printf("-5 when divided by 2 levels a remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 levels a remainder of %d\n", 5 % -2);

    // no operator is assumed to be present
    // printf("the value of 4 * 5 is %d\n", (4)(5)); --> will not return 20/ wrong!
    printf("the value of 4*5 is %d\n", (4) * (5));

    // there is no operator to perform exponention in c
    // printf("the value of 4 ^ 5 is %d\n", 4 ^ 5);  [(^)that is  {bitwise XOR} operator ]
    printf("the value of 4 to the power 5 is %f\n", pow(4, 5));
    // int and int -->int
    printf("the value of 6 + 5 is %d\n", 6 + 5);
    // int and float -->float
    printf("the value of 6 + 5 is %f\n", 6 + 5.8);
    // float and float -->float
    printf("the value of 6 + 5 is %f\n", 6.6 + 5.8);

    printf("the value of 5/2 is %d\n", 5 / 2);

    printf("the value of 0.3/9 is %f\n", 0.3 / 9);

    return 0;
}