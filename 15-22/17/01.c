/*
Create a structure called student that can contain data given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the college.
(1) Write a function to print names of all students who joined in a
particular year.
(2) Write a function to print the data of a student whose roll
number is received by the function.
*/

#include <stdio.h>
#include <string.h>

struct name
{
    char firstName[25];
    char lastName[25];
};

struct course
{
    char code[8];
    char name[50];
};

struct student
{
    struct name name;
    char roll[11];
    char department[50];
    struct course course;
    int year;
};

int main()
{
    struct student students[451];
    int idx = -1;
    char q = 'y';
    int dh;
    printf("Press 0 to add student.\n");
    printf("Press 1 to print names of all students who joined in a particular year.\n");
    printf("Press 2 to print the data of a student by entering roll number.\n");
    while (q != 'n' || q != 'N')
    {
        printf("Enter your choice.\n> ");
        scanf("%c", &q);
        while ((dh = getchar()) != '\n')
            ;
        if (q == '0')
        {
            if (idx == 449)
            {
                printf("No new student entry allowed.\n");
                continue;
            }
            idx++;
            printf("Enter first Name     : ");
            scanf("%s", &students[idx].name.firstName);
            while ((dh = getchar()) != '\n')
                ;
            printf("Enter last Name      : ");
            scanf("%s", &students[idx].name.lastName);
            while ((dh = getchar()) != '\n')
                ;
            printf("Enter roll number    : ");
            scanf("%s", &students[idx].roll);
            while ((dh = getchar()) != '\n')
                ;
            printf("Enter department name: ");
            scanf("%s", &students[idx].department);
            while ((dh = getchar()) != '\n')
                ;
            printf("Enter course code    : ");
            scanf("%s", &students[idx].course.code);
            while ((dh = getchar()) != '\n')
                ;
            printf("Enter course name    : ");
            scanf("%s", &students[idx].course.name);
            while ((dh = getchar()) != '\n')
                ;
            printf("Enter year of joining: ");
            scanf("%d", &students[idx].year);
            while ((dh = getchar()) != '\n')
                ;
        }
        else if (q == '1')
        {
            if (idx == -1)
            {
                printf("No students added yet.\n");
                continue;
            }
            int yr;
            printf("Enter year: ");
            scanf("%d", &yr);
            while ((dh = getchar()) != '\n')
                ;
            int count = 0;
            for (int i = 0; i <= idx; i++)
            {
                if (students[i].year == yr)
                {
                    count++;
                    printf("%d. %s %s ( %s )\n", i + 1, students[i].name.firstName, students[i].name.lastName,students[i].roll);
                }
            }
            printf(" count: %d\n", count);
        }
        else if (q == '2')
        {
            if (idx == -1)
            {
                printf("No students added yet.\n");
                continue;
            }
            int flag = 0;
            char roll[11];
            printf("Enter roll number: ");
            scanf("%s", &roll);
            while ((dh = getchar()) != '\n')
                ;
            for (int i = 0; i <= idx; i++)
            {
                if (strcmp(students[i].roll,roll)==0)
                {
                    flag = 1;
                    printf("Roll Number    : %s\n", students[i].roll);
                    printf("Name           : %s %s\n", students[i].name.firstName, students[i].name.lastName);
                    printf("Course Code    : %s\n", students[i].course.code);
                    printf("Course Name    : %s\n", students[i].course.name);
                    printf("Department     : %s\n", students[i].department);
                    printf("Year of Joining: %d\n", students[i].year);
                    break;
                }
            }
            if (flag == 0)
            {
                printf("Student with roll number %s not found.\n", roll);
            }
        }
        else if (q == 'n' || q == 'N')
        {
            break;
        }
        else
        {
            printf("Invalid Input");
        }
    }
    return 0;
}