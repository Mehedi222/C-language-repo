#include <stdio.h>

int main()
{
    int a = 4;
    // int a = 4.55;  [not recommended because 4.55 is not a integer]
    float b = 5.55;
    char c = 'u';
    int d = 45;
    printf("the value of a is %d \n", a);
    printf("the value of b is %f \n", b);
    printf("the value of c is %c \n", c);
    printf("the value of d is %d \n", a + d);
    return 0;
}