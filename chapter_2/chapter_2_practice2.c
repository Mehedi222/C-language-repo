// Q3. Write a program to check whether a number is divisible  97 or not.
#include <stdio.h>

int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("divisibility test return %d\n", num % 97);

    // Q4. Explain step by step evaluation of 3*x/y-z +k

    // Where x=2, y=3, z=3 and k=1
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 6/3 - 3 +1
    // 2 -3 +1
    // 0
    printf("the value of the result is %d", result);
    return 0;
}
// Q5. 3.0+1 will be:

// 1.Integer
// 2.Floating number{ans}
//3.Character