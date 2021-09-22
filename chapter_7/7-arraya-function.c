// #include <stdio.h>
// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value of element %d is %d \n", i + 1, *(ptr + i));
//     }
// }
/*-------------
----------------
----------------
---------------*/
// void printArray(int ptr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value of element %d is %d \n", i + 1, *(ptr + i));
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 55, 8, 7, 55, 5, 36};
//     printArray(arr, 8);
//     return 0;
// }
/*-------------
----------------
----------------
---------------*/
#include <stdio.h>
void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d \n", i + 1, *(ptr + i));
    }
    ptr[2] = 55555; //this value will be change in arr main as well
}

int main()
{
    int arr[] = {1, 2, 55, 8, 7, 55, 5, 36};
    printArray(arr, 8);
    printf("%d", arr[2]);
    return 0;
}