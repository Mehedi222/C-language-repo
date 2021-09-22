#include <stdio.h>
#include <string.h> // for using strcpy() function

int main()
{
    char mj[100];
    char aj[100];
    printf("\n\nstrcpy(destination, source): is a system defined method used to copy the source string into the destination.\n\n");
    printf("\n\nEnter the string: ");
    gets(aj);
    strcpy(mj, aj);
    printf("\n\nThe copied string is: %s\n\n", mj);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}