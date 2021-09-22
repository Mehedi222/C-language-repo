#include <stdio.h>
float fahrenheit(int a);
int main()
{
    int a;
    printf("Enter the fahrenheit number\n");
    scanf("%d", &a);
    printf("The value of celsius %f", fahrenheit(a));
    return 0;
}
float fahrenheit(int a)
{
    float result;
    result = (float)(a * 1.8) + 32;
    return result;
}