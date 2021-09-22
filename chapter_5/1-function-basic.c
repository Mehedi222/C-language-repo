#include <stdio.h>
void display(); //funtion prototype
int main()
{
    int a;
    printf("Initializing display funtion\n");
    display(); //funtoion call
    printf("Display funtion finish it's work\n");
    return 0;
}
// funtion difinition
void display()
{
    printf("this is display\n");
}
