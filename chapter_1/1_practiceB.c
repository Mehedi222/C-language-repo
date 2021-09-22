// Q1. Write a c program to calculate the area of a rectangle:

// b) using inputs supplied by the user

#include <stdio.h>

int main()
{
    int length, breadth;
    printf("what is the length of the rectangel \n");
    scanf("%d", &length);
    printf("what is the breadth of the rectangel \n");
    scanf("%d", &breadth);
    printf("the area of your rectangel is %d", length * breadth);
    return 0;
}