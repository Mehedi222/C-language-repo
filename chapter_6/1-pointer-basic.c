#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i; //j will not store the adress of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("THe adress of i is %u\n", &i);
    printf("The adress of i is %u\n", j);
    printf("The value of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));

    return 0;
}