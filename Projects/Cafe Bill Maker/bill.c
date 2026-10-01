#include <stdio.h>

int main(void)
{
    int choice, quantity, total;
    float coffee = 40, tea = 15, biscuit = 20, water = 10;

    do
    {
        printf("--- Akarsit's Cafe --- \n");
        printf("1. Coffee \n");
        printf("2. Tea \n");
        printf("3. Biscuit\n");
        printf("4. Water\n");
        printf("5. Bill / Checkout\n");
        printf("6. Exit\n");

        printf("What Would U Like To Order : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Please Enter Quantity Of Coffee You Need : ");
            scanf("%d", &quantity);

            if (quantity > 1)
            {
                total = coffee * quantity;
                printf("Added %d Coffe Into Your Cart !\n", quantity);
            }
            else if (quantity = 1)
            {
                total += coffee;
                printf("Added Coffe Into Your Cart!\n");
            }
            else
            {
                printf("Enter Valid Quantity!!");
            }

            break;

        case 2:

            quantity = 0;

            printf("Enter The Quantity Of Tea You Need : ");
            scanf("%d", &quantity);

            if (quantity > 1)
            {
                total = quantity * tea;

                printf("Added %d Tea In Your Cart!\n", quantity);
            }
            else if (quantity = 1)
            {
                total += tea;
                printf("Added Tea In Your Cart!\n");
            }
            else
            {
                printf("Enter Valid Quantity!!\n");
            }

            break;

        case 3:
            quantity = 0;

            printf("Enter The Quantity Of Biscuit You Need : ");
            scanf("%d", &quantity);

            if (quantity > 1)
            {
                total = quantity * biscuit;

                printf("Added %d Biscuit In Your Cart !\n");
            }
            else if (quantity = 1)
            {
                total += biscuit;

                printf("Added Biscuit Into Your Cart !");
            }
            else
            {
                printf("Enter Valid Quanity");
            }

            break;

        case 4:
            quantity = 0;

            printf("Enter The Quantity Of Water (in glass) You Need : ");
            scanf("%d", &quantity);

            if (quantity > 1)
            {
                total = quantity * water;
                printf("Added %d Glass Of Water In Your Cart!");
            }
            else if (quantity = 1)
            {
                total += water;
                printf("Added Glass Of Water In Your Cart!");
            }
            else
            {
                printf("Enter Valid Quantity!");
            }

            break;

        case 5:
            printf("Genrating Your Bill...\n");
            printf("Your Total bill is : %d Rs\n", total);
            break;

            case 6: 
            printf("Thanks For Visiting Our Cafe!\n");
            printf("We Hope You Had Best Experince !");
            break;

        default:
        printf("Enter Valid Choice");
            break;
        }

    } while (choice != 6);
}