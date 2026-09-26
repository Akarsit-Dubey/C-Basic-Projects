#include <stdio.h>

int main(void)
{
    int marks;

    printf("Enter Your Obtained Marks : ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("You Have Passed The Examination.\n");
        printf("Your Grade : A+");
    }
    else if (marks >= 75 && marks <= 89)
    {
        printf("You Have Passed The Examination.\n");
        printf("Your Grade : A");
    }
    else if (marks >= 60 && marks <= 74)
    {
        printf("You Have Passed The Examination.\n");
        printf("Your Grade : B");
    }
    else if (marks >= 40 && marks <= 59)
    {
        printf("You Have Passed The Examination.\n");
        printf("Your Grade : C");
    }
    else if (marks >= 33 && marks <= 39)
    {
        printf("You Have Passed The Examination.\n");
        printf("Your Grade : D");
    }
    else if (marks < 0 || marks > 100)
    {
        printf("Invalid Marks.");
    }
    else
    {
        printf("You Have Failed The Examination.\n");
        printf("Your Grade : F");
    }
    return 0;
}
