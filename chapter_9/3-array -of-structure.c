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
    struct employee facebook[100];

    facebook[0].salary = 100;
    facebook[0].code = 100;
    strcpy(facebook[0].name, "shanto");

    facebook[1].salary = 100;
    facebook[1].code = 101;
    strcpy(facebook[1].name, "shanta");

    facebook[3].salary = 100;
    facebook[3].code = 103;
    strcpy(facebook[3].name, "shante");

    return 0;
}