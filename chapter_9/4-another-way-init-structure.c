#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee shanto = {100, 34.25, "harry"};

    printf("code is: %d \n", shanto.code);
    printf("salary is: %f \n", shanto.salary);
    printf("name is: %s \n", shanto.name);

    return 0;
}