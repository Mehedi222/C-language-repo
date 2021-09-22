#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("simple.tex", "r"); //-->for reading the file
    // ptr = fopen("simple.tex", "w"); //-->for writing to a file
    return 0;
}