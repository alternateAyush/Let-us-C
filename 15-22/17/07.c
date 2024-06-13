/*
Define a function that compares two given dates. To store a date,
use a structure that contains three members namely day, month
and year. If the dates are equal the function should return 0,
otherwise it should return 1.
*/

#include <stdio.h>

struct Date
{
    int day, month, year;
};

int func(struct Date d1, struct Date d2)
{
    return ((d1.day == d2.day) && (d1.month == d2.month) && (d1.year == d2.year)) ? 0 : 1;
}

int main()
{
    struct Date d1, d2;
    printf("Enter Date DD MM YYYY: ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    printf("Enter Date DD MM YYYY: ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);
    if (func(d1, d2) == 0)
    {
        printf("Date %d/%d/%d and %d/%d/%d are equal.\n", d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
    }
    else
    {
        printf("Date %d/%d/%d and %d/%d/%d are not equal.\n", d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
    }
    return 0;
}