//  Create a string using " " and print its content using a loop

#include <stdio.h>

int main()
{
    // char str[] = "SHANTO";
    char str[] = {'S', 'H', 'A', 'N', 'T', 'O', '\0'};
    char *ptr = str;
    while (*ptr != '\0')

    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}