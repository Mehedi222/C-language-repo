// Q3. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)
// Answer :
#include <stdio.h>

int main()
{
    float celsius = 37, far;
    far = (celsius * 9 / 5) + 32;
    printf("The value of this celsius temperatuer in Fahrenheit is %f", far);
    return 0;
}