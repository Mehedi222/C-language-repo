// c programing to check whether what age you can drive or not

#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);
    if (age >= 90)
    // if (age != 90)
    {
        printf(" yon can not drive\n");
    }
    else
    {
        printf(" you can  drive\n");
    }

    // if (age = 50); [= and == aer not same]
    if (age == 50)
    {
        printf("half century\n");
    }
    return 0;
}