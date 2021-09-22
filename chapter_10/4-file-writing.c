#include <stdio.h>

int main()
{
    FILE *fptr;
    int num = 432;
    fptr = fopen("shantos.txt", "w");
    fprintf(fptr, "% d\n", num);
    fprintf(fptr, "THanks for ussing fprint", num);
    fclose(fptr);

    return 0;
}