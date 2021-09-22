// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     int num;
//     ptr = fopen("Shanto.txt", "r");
//     fscanf(ptr, "%d", &num);
//     printf("The value of num is %d\n", num);
//     return 0;
// }

// jodi 1 ar basi hoi

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num1;
    ptr = fopen("Shanto.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num1);
    fclose(ptr);
    printf("The value of num is %d\n", num);
    printf("The value of num1 is %d\n", num1);
    return 0;
}