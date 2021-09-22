// Write a program to decrypt the string encrypted
//  using the encrypt function in problem 6.

#include <stdio.h>
// #include <string.h> // for using strcpy() function

void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[] = "tiboup";
    decrypt(c);
    printf("decrypt string is: %s", c);
    return 0;
}