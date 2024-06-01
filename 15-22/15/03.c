/*
A Credit Card number is usually a 16-digit number. A valid Credit
Card number would satisfy a rule explained below with the help of a
dummy Credit Card number—4567 1234 5678 9129. Start with the
rightmost - 1 digit and multiply every other digit by 2.
4 5 6 7 1 2 3 4 5 6 7 8 9 1 2 9
8 12 2 6 10 14 18 4
Then subtract 9 from numbers that are larger than 10. Thus, we get:
8 3 2 6 1 5 9 4
Add them all up to get 38.
Add all the other digits (5, 7, 2, 4, 6, 8, 1, 9) to get 42.
Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card
number is valid.
Write a program that receives a Credit Card number and checks
using the above rule whether the Credit Card number is valid.
*/

#include <stdio.h>

int isValid(char *str)
{
    int sum = 0;
    for (int i = 0; i < 16; i++)
    {
        int digit = str[i] - '0';
        if (i % 2 == 0)
        {
            if((digit*2)<10){
                sum+=(digit*2);
            }else{
                sum+=(digit*2)-9;
            }
        }
        else
        {
            sum += digit;
        }
    }
    if (sum % 10 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char str[17];
    printf("Enter credit card number: ");
    scanf("%s", &str);
    if (isValid(str))
    {
        printf("Valid credit card.\n");
    }
    else
    {
        printf("Invalid credit card.\n");
    }
    return 0;
}