#include <stdio.h>
float fibonacci(int n);
int main()
{
    int a;
    printf("Enter the  fibonacci number\n");
    scanf("%d", &a);
    printf("The value of fib %f", fibonacci(a));
    return 0;
}
float fibonacci(int n)
{
    float fib;
    fib = (n - 1) + (n - 2);
    return fib;
}
