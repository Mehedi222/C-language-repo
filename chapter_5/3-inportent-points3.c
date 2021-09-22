
#include <stdio.h>
void goodMorning();
void goodAfterNoon();
void goodNight();
int main()
{
    goodMorning();
    return 0;
}

void goodMorning()
{
    printf("Good morning Shanto\n");
    goodAfterNoon();
}

void goodAfterNoon()
{
    printf("Good AfterNoon Shanto\n");
    goodNight();
}

void goodNight()
{
    printf("Good Night Shanto\n");
}