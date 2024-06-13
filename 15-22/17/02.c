/*
Create a structure that can contain data of customers in a bank. The
data to be stored is Account number, Name and Balance in account.
Assume maximum of 200 customers in the bank.
(1) Define a function to print the Account number and name of
each customer with balance below Rs. 1000.
(2) If a customer requests for withdrawal or deposit, it should
receive as input Account number, amount and code (1 for
deposit, 0 for withdrawal).
Define a function that prints a message, “The balance is
insufficient for the specified withdrawal”, if on withdrawal the
balance falls below Rs. 1000.
*/

#include <stdio.h>
#include <string.h>

struct name
{
    char firstName[50];
    char lastName[50];
};

struct account
{
    char number[50];
    struct name name;
    float balance;
};

int main()
{
    struct account customers[200];
    int idx = -1;
    char q = 'y';
    int dh;
    printf("Press 0 to withdrawal.\n");
    printf("Press 1 to deposit.\n");
    printf("Press 2 to check accounts with balance less than 1000.\n");
    printf("Press 3 to add customer account.\n");
    while (q != 'n' || q != 'N')
    {
        printf("Enter choice.\n> ");
        scanf("%c", &q);
        while ((dh = getchar()) != '\n')
            ;
        if (q == '0' || q == '1')
        {
            if (idx < 0)
            {
                printf("No customers added yet.\n");
                continue;
            }
            char accNum[50];
            float amt;
            printf("Enter account number: ");
            scanf("%s", &accNum);
            while ((dh = getchar()) != '\n')
                ;
            printf("Enter amount: ");
            scanf("%f", &amt);
            while ((dh = getchar()) != '\n')
                ;
            if (amt <= 0)
            {
                printf("Invalid amount.\n");
                continue;
            }
            int flag = 0;
            for (int i = 0; i <= idx; i++)
            {
                if (strcmp(customers[i].number, accNum) == 0)
                {
                    flag = 1;
                    if (q == '0')
                    {
                        if ((customers[i].balance - amt) < 1000.00)
                        {
                            printf("The balance is insufficient for the specified withdrawal.\n");
                            break;
                        }
                        else
                        {
                            customers[i].balance -= amt;
                            printf("Successfull withdrawal.\n");
                        }
                    }
                    else
                    {
                        customers[i].balance += amt;
                        printf("Successfull deposit.\n");
                    }
                }
            }
            if (flag == 0)
            {
                printf("No account found.\n");
                continue;
            }
        }
        else if (q == '2')
        {
            if (idx == -1)
            {
                printf("No customers added yet.\n");
                continue;
            }
            int count = 0;
            for (int i = 0; i <= idx; i++)
            {
                if (customers[i].balance < 1000.00)
                {
                    count++;
                    printf("%d %s %s %s\n", i + 1, customers[i].number, customers[i].name.firstName, customers[i].name.lastName);
                }
            }
            printf(" count: %d\n", count);
        }
        else if (q == '3')
        {
            if(idx==199){
                printf("No more customers can be added.\n");
                continue;
            }
            idx++;
            printf("Enter Account Number: ");
            scanf("%s", &customers[idx].number);
            while ((dh = getchar()) != '\n')
                ;
            printf("Enter First Name    : ");
            scanf("%s", &customers[idx].name.firstName);
            while ((dh = getchar()) != '\n')
                ;
            printf("Enter Last Name     : ");
            scanf("%s", &customers[idx].name.lastName);
            while ((dh = getchar()) != '\n')
                ;
            customers[idx].balance = 0;
            printf("Customer added.\n");
        }
        else if (q == 'n' || q == 'N')
        {
            break;
        }
        else
        {
            printf("Invalid Input.\n");
        }
    }
    return 0;
}