#include <stdio.h>

int main()
{
    int x = 4;
    int y = 8;
    // absence of parentheses
    printf("the value of 3*y - 8*x is %d\n", 3 * y - 8 * x);
    //without absence of parentheses
    printf("the value of 3 * (y - 8 * x) is %d\n", 3 * (y - 8 * x));

    printf("the value of 3*y / 8*x is %d\n", 3 * y / 8 * x);
    // 24/32 will not give the solution
    // 24/8*4
    //3*4
    // 12
    return 0;
}
