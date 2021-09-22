// Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>

int main()
{
    //  prim number: A prime number (or a prime) is a natural number greater than
    //  1 that is not a product of two smaller natural numbers.
    // disclaimer: this is not the best mathod to solved the problem
    int n = 6, prim = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prim = 0;
            break;
        }
    }
    if (prim == 0)
    {
        printf("this is not a prim number");
    }
    else
    {
        printf("this is a prim number");
    }

    return 0;
}