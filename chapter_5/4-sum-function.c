#include <stdio.h>
// sum is a funtion which take a and  b as integer input and return an integer as a output
int sum(int a, int b); //prototype function

int main()
{
    int c;
    c = sum(2, 5); //call function{sum amaka value dita parba ar oi
    // value ami variable(c)ka dita parbo}
    printf("The value of c is %d\n", c);
    return 0;
}
// a ar b value + kora return kora dao
//  ar jai return value asa taka jakhanai ami call korbo sakhanai jata output paia jai
int sum(int a, int b) //[{a,b are argument},{2,5 are paraneter}]
{                     // funtion definition
    int result;
    result = a + b;
    return result;
}

// #include <stdio.h>
// // sum is a funtion which take a and  b as input and return an integer as a output
// int sum(int a, int b); //prototype function

// int main()
// {
//     int c;
//     c = sum(2, 5); //call function{sum amaka value dita parba ar oi
//     // value ami variable(c)ka dita parbo}
//     printf("The vale of c is %d\n", c);
//     return 0;
// }

// int sum(int a, int b)
// { // funtion definition
//     int c;
//     c = a + b;
//     return c;
// }
