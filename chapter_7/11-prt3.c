//  Write a program to create an array of 10 integers and store a multiplication table of 5 in it.

#include <stdio.h>

int main()
{
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = 20 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("20x%d = %d\n", i + 1, mul[i]);
    }

    return 0;
}