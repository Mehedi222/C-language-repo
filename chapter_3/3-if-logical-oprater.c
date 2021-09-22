// c programing to check whether what age you can drive or not

#include <stdio.h>

int main()
{
    int age;
    int vipPass = 0;
    // vipPass = 1;
    printf("Enter the age\n");
    scanf("%d", &age);
    // if (age <= 70 && age >= 18)
    // if ((age <= 70 && age >= 18) || vipPass == 1) {18-90 ar modda sobai gari chalata paarba but onnra prba na}
    if ((age <= 70 && age >= 18) || !vipPass == 1) //{sobi gari chalata parba}

    {
        printf(" you are above 18 and below 70, you can drive \n");
    }
    else
    {
        printf(" you cannot  drive\n");
    }

    return 0;
}