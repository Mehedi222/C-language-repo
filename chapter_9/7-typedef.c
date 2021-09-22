#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

// void show(struct employee emp)
void show(emp emp1)
{
    printf("The code of employee is: %d\n", emp1.code);
    printf("The salary of employee is:%f\n ", emp1.salary);
    printf("The name of employee is: %s\n", emp1.name);
}

int main()
{
    // declaring e1 and ptr

    // struct employee e1;{typedef--> emp e1;}
    // struct employee *ptr;{typedef--> emp *ptr;}
    emp e1;
    emp *ptr;

    // pointing ptr to e1
    ptr = &e1;

    // set the number value of e1
    ptr->code = 101;
    ptr->salary = 10.1;
    strcpy(ptr->name, "shanto");

    show(e1);
    return 0;
}