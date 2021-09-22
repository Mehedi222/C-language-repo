// Write a program having a variable i. Print the address of i. Pass this
//  variable to a function and print its address. Are these addresses same? Why?

#include <stdio.h>

void printAdd(int a)
{
    printf("The address of variable a is %u\n", &a);
}
int main()
{
    int i = 4;
    printf("the value of the variable i is %d\n", i);
    printAdd(i);
    printf("the address of variable i is %u\n", &i);
    return 0;
}