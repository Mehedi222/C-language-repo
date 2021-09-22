//Modify the program above to check whether the
//  file exists or not before opening the file.

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num1;
    // ptr = fopen("Shanto11.txt", "r");{false}
    ptr = fopen("Shanto.txt", "r"); //{true}
    if (ptr == NULL)
    {
        printf("the file does not exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num1);
        fclose(ptr);
        printf("The value of num is %d\n", num);
        printf("The value of num1 is %d\n", num1);
    }

    return 0;
}