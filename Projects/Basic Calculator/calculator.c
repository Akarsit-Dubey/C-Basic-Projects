#include <stdio.h>

int main(void)
{
    int choice;
    float num1, num2;

    printf("--- Calculator ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter The Operation to perform : ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4)
    {
        printf("Invalid Operation. Retry...");
        return 0;
    }

    printf("Enter Two Numbers : ");
    scanf("%f %f", &num1, &num2);

    switch (choice)
    {
    case 1:
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%.2f x %.2f = %.2f", num1, num2, num1 * num2);
        break;

    case 4:
        if (num2 == 0)
        {
            printf("Error!! Division by zero is undefined!");
        }
        else
        {
            printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        }
        break;
    }

    return 0;
}