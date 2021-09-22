// Write your own version of strlen function from <string.h>

#include <stdio.h>
#include <string.h> // for using strcpy() function
int strlen(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char st[] = "shanto";
    int l = strlen(st);
    printf("the length of this string is %d", l);
    return 0;
}