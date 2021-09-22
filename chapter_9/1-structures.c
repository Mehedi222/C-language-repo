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
    int a = 34;
    float b = 33.22;
    char c = 'g';
    // employee e1;
    // e1.salary = 330.33; ==>wont work without employee structure
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.225;
    // e1.name = "shanto"; -->not work
    strcpy(e1.name, "shanto");
    printf("%.3f\n", e1.salary);
    printf("%d\n", e1.code);
    printf("%s\n", e1.name);
    return 0;
}