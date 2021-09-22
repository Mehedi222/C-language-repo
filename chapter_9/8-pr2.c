// Write a function SumVector which returns the sum of two
//  vectors passed to it. The vectors must be two-dimensional.

#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
}
int main()
{
    struct vector v1, v2, sum;
    v1.x = 3;
    v1.y = 5;
    printf("x dim is %d and y dim is %d\n", v1.x, v1.y);
    v2.x = 4;
    v2.y = 8;
    printf("x dim is %d and y dim is %d\n", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("x dim of result is %d\n", sum.x, sum.y);
    return 0;
}