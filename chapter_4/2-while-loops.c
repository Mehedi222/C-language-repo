#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    // a = 11;
    // while(a>10){ -->these two lines will lwad to an infinite loop

    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}