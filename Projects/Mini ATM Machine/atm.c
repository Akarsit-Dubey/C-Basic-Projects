#include <stdio.h>

int main(void)
{
    int choice;
    float balance = 50000;
    float withdraw, deposit;

    do
    {
        printf("---ATM Menu---\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");

        printf("What Operation U Want To Perform? : ");
        scanf("%d", &choice);

        if(choice<=0)
        {
            printf("invalid input");
        }
        
        switch (choice)
        {
        case 1:
            printf("Your Balance is : %.2f \n", balance);
            break;

        case 2:
            printf("Enter The Amount To Withdraw : ");
            scanf("%f", &withdraw);

            if (withdraw <= 0)
            {
                printf("Invalid Amount\n");
            }
            else if (withdraw > balance)
            {
                printf("Not Enough Balance\n");
            }
            else
            {
                balance -= withdraw;
                printf("Now Your Balance Is : %.2f\n", balance);
            }

            break;

        case 3:
            printf("Enter The Amount To Deposit : ");
            scanf("%f", &deposit);

            if(deposit<=0){
                printf("Invalid Amount\n");
            }

            else{
            balance += deposit;
            printf("Deposit Successfull. \n");
            }

            break;

        case 4:
            printf("Thanks For Visiting Mini ATM");

            break;

        default:
            printf("Invalid Input\n");
            break;
        }

    } while (choice != 4);

    return 0;
}