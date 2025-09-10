// Insurance of a driver based on age,sex and marital status
#include <stdio.h>
int main()
{
    int age;
    char sex, ms;
    printf("Enter your age,gender and marital status \n ");
    scanf("%d %c %c", &age, &sex, &ms);
    if (((age >=25 && sex=='F')) || ((age>30 && sex=='M') || (ms=='Y'))) // logical OR operator and logical AND operator
    {                                                                   // is the driver is married, type Y and will get insurance
        printf("You are eligible for the insurance");        // if the driver is not married, type N
    }
    else{
        printf("You are not eligible for the insurance");
    }
    return 0;
    }
    