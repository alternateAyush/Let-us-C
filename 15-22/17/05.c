/*
(e) Suppose there is a structure called employee that holds
information like employee code, name and date of joining. Write a
program to create an array of structures and enter some data into
it. Then ask the user to enter current date. Display the names of
those employees whose tenure is greater than equal to 3 years.
*/

#include <stdio.h>
#include <time.h>

struct Date
{
    int day, month, year;
};

struct Employee
{
    int code;
    char name[30];
    struct Date date;
};

void threeYearEmp(int n, struct Employee arr[n], int currYear)
{
    int count = 0;
    printf("Employee with equal to or more than 3 yrs with company as of %d:\n", currYear);
    for (int i = 0; i < n; i++)
    {
        if (currYear - arr[i].date.year >= 3)
        {
            count++;
            printf("\n%d. Employee Code: %-10d, Name: %-20s, Date of Joining: %d/%d/%d", count, arr[i].code, arr[i].name, arr[i].date.day, arr[i].date.month, arr[i].date.year);
        }
    }
    printf("\n count: %d", count);
    return;
}

int main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int currYear = tm.tm_year + 1900;
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee arr[n];
    int dh;
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee code: ");
        scanf("%d", &arr[i].code);
        while ((dh = getchar()) != '\n')
            ;
        printf("Enter employee name: ");
        scanf("%s", &arr[i].name);
        while ((dh = getchar()) != '\n')
            ;
        printf("Enter date of joining: DD MM YYYY ");
        scanf("%d %d %d", &arr[i].date.day, &arr[i].date.month, &arr[i].date.year);
        while ((dh = getchar()) != '\n')
            ;
    }
    threeYearEmp(n, arr, currYear);
    return 0;
}