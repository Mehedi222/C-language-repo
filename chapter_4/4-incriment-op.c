#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value after i++ is %d\n", ++i);
    i++; //-->first print then increment
    ++i; //-->increment first then print
    printf("the value of i is %d\n", i);
    i += 10; //-->first print 8 then increment 10 -->output is 18
    printf("the value of i is %d\n", i);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int i = 5;
//     printf("the value after i-- is %d\n", --i);
//     i--; //-->first print then decreased
//     --i; //-->decreased first then print
//     printf("the value of i is %d\n", i);
//     i -= 10; //-->first print 2 then decreased 10 -->output is -8
//     printf("the value of i is %d\n", i);

//     return 0;
// }