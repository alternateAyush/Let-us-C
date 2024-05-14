/*
Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic:
 - If the student gets first class and he fails in more than 3
subjects, he does not get any grace. Otherwise, he gets a grace
of 5 marks per subject.
 - If the student gets second class and he fails in more than 2
subjects, he does not get any grace. Otherwise, he gets a grace
of 4 marks per subject.
 - If the student gets third class and he fails in more than 1
subject, then he does not get any grace. Otherwise, he gets a
grace of 5 marks.
*/

#include <stdio.h>

int main()
{
    int class, fails;
    printf("Enter class: ");
    scanf("%d", &class);
    printf("Enter number of failed subjects: ");
    scanf("%d", &fails);
    switch (class)
    {
    case 1:
        if (fails > 3)
        {
            printf("No grace marks.\n");
        }
        else
        {
            printf("Grace of %d per subject = %d", 5, fails * 5);
        }
        break;
    case 2:
        if (fails > 2)
        {
            printf("No grace marks.\n");
        }
        else
        {
            printf("Grace of %d per subject = %d", 4, fails * 4);
        }
        break;

    case 3:
        if (fails > 1)
        {
            printf("No grace marks.\n");
        }
        else
        {
            printf("Grace of %d per subject = %d", 5, fails * 5);
        }
        break;
    default:
        printf("No case assigned for class %d", class);
    }
    return 0;
}