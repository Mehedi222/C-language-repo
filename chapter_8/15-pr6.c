// Write a program to encrypt a string by adding 1 to
//  the ASCII value of its characters.

#include <stdio.h>
// #include <string.h> // for using strcpy() function

void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char c[] = "shanto";
    encrypt(c);
    printf("encrypt string is: %s", c);
    return 0;
}