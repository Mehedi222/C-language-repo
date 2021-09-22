// Write a program to calculate the factorial of a given number using for loop.

#include <stdio.h>

int main()
{
    int i = 0, n = 8, factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("the value  of factorial %d is %d", n, factorial);
    return 0;
}
#include <stdio.h>

//  Repeat 8 using a while loop.

// int main()
// {
//     int i = 1, n = 8, factorial = 1;
//     while (i <= n)
//     {
//         factorial *= i;
//         i++;
//     }

//     printf("the value  of factorial %d is %d", n, factorial);
//     return 0;
// }