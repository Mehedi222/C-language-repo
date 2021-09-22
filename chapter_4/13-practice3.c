// Write a program to sum the first ten natural numbers using a while loop.

// #include <stdio.h>

// int main()
// {
//     int i = 1, sum = 0, n = 10;
//     for (i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
//     printf("the value of sum(1 to 10) is %d", sum);
//     return 0;
// }
//other wey

// #include <stdio.h>

// int main()
// {
//     int sum = 0, n;
//     for (int i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
//     printf("the value of sum(1 to 10) is %d", sum);
//     return 0;
// }

// #include <stdio.h>

int main()
{
    int i = 0, sum = 0, n = 10;
    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("the value of sum(1 to 10) is %d", sum);
    return 0;
}